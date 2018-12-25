#include "restaurante.h"
#include "ui_restaurante.h"

Restaurante::Restaurante(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Restaurante)
{
    ui->setupUi(this);
    connect(ui->actionSalvar,SIGNAL(triggered()), this, SLOT(salvar()));
    connect(ui->actionCarregar_2,SIGNAL(triggered()), this, SLOT(carregar()));
}
Restaurante::~Restaurante()
{
    delete ui;
}

void Restaurante::on_cb_comida_activated(const QString &arg1)
{

}
void Restaurante::inserir_na_tabela(Paciente paciente, int row)
{
    ui->tbl_dados->setItem(row,0,new QTableWidgetItem(paciente.getNome()));
    ui->tbl_dados->setItem(row,1,new QTableWidgetItem(paciente.getBebida()));
    ui->tbl_dados->setItem(row,2,new QTableWidgetItem(paciente.getComida()));
    ui->tbl_dados->setItem(row,3,new QTableWidgetItem(QString::number(paciente.getQuantidade_CaloriasTotal())));
}
void Restaurante::salvar()
{
    QString nomeArquivo = QFileDialog::getSaveFileName(this,"Lista de Clientes","","Texto Puro(*.txt);;Arquivos Separado por Vírgulas(*.csv)");
    if( GerenciadorDeArquivos::SalvarClientela(nomeArquivo, clientes_total) ){
        QMessageBox::information(this, "Salvar Clientela","Dados Salvos com Sucesso");
    }else{
        QMessageBox::information(this, "Salvar Clientela","Não foi possível salvar os dados");
    }
}

void Restaurante::carregar()
{
    QString nomeArquivo = QFileDialog::getOpenFileName(this,"Lista de Clientes","","Texto Puro(*.txt);;Arquivos Separado por Vírgulas(*.csv)");
    clientes_total.clear();

    if(GerenciadorDeArquivos::CarregarClientela(nomeArquivo,clientes_total)){

        ui->tbl_dados->clearContents();
        for(int i=0;i<clientes_total.size();i++){

            if(i >= ui->tbl_dados->rowCount())
                ui->tbl_dados->insertRow(i);

            inserir_na_tabela(clientes_total[i],i);
        }

    }else{
        QMessageBox::information(this, "Carregar clientela","Não foi possível carregar os dados");
    }
}
void Restaurante::on_btn_enviar_clicked()
{
    if(ui->le_nome_paciente->text().size() != 0){

        Paciente paciente;

        paciente.setNome(ui->le_nome_paciente->text());
        paciente.setComida(ui->cb_comida->currentText());
        paciente.setBebida(ui->cb_bebida->currentText());
        paciente.setQuantidade_Comida(ui->cb_quantidade_comida->currentText().toInt());
        paciente.setQuantidade_Bebida(ui->cb_quantidade_bebida->currentText().toInt());

        // funcionando qDebug()<< paciente.getQuantidade_CaloriasTotal(paciente.getQuantidade_Comida(), paciente.getQuantidade_Bebida());


        int quantidade_linhas = ui->tbl_dados->rowCount(); //retorna a quantidade de linhas
        ui->tbl_dados->insertRow(quantidade_linhas);
        inserir_na_tabela(paciente, quantidade_linhas);

        ui->le_nome_paciente->clear();

        clientes_total.inserir_cliente(paciente);

    }
}












