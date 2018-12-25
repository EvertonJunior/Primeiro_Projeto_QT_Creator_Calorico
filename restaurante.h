#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include <QMainWindow>
#include <QDebug>
#include <QVector>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>

#include "gerenciadordearquivos.h"

#include "paciente.h"
#include "clientela.h"

namespace Ui {
class Restaurante;
}

class Restaurante : public QMainWindow
{
    Q_OBJECT
private:

    Clientela clientes_total;

public:
    explicit Restaurante(QWidget *parent = nullptr);
    ~Restaurante();

private slots:

    void on_cb_comida_activated(const QString &arg1);

    void on_btn_enviar_clicked();

    void salvar();
    void carregar();



private:
    Ui::Restaurante *ui;

    void inserir_na_tabela(Paciente paciente, int row);
};

#endif // RESTAURANTE_H
