#include "gerenciadordearquivos.h"

GerenciadorDeArquivos::GerenciadorDeArquivos()
{

}

bool GerenciadorDeArquivos::SalvarClientela(QString &arquivo, Clientela &clientela)
{
    QFile file(arquivo);

    if(!file.open(QIODevice::WriteOnly)){
        return false;
    }

    QTextStream out(&file);

    for(int i=0;i<clientela.size();i++){
        out <<clientela[i].getNome()<<","<<clientela[i].getComida()<<","<<clientela[i].getBebida()<<","<<clientela[i].getQuantidade_CaloriasTotal()<<"\n";

    }

    file.close();
    return true;
}

bool GerenciadorDeArquivos::CarregarClientela(QString &arquivo, Clientela &clientela)
{
    QFile file(arquivo);

    if(!file.open(QIODevice::ReadOnly)){
        return false;
    }

    QTextStream in(&file);

    QString linha;

    while(!in.atEnd()){
        linha = in.readLine();

        QStringList dados = linha.split(",");

        Paciente p(dados[0],dados[1],dados[2],dados[3].toInt());
        clientela.inserir_cliente(p);

    }
    return true;
}
