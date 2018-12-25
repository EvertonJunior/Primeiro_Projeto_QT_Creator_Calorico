#ifndef CLIENTELA_H
#define CLIENTELA_H

#include <QObject>

#include <QMainWindow>
#include <QDebug>
#include <QVector>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>

#include "paciente.h"

class Clientela : public QObject
{
    Q_OBJECT
public:
    explicit Clientela(QObject *parent = nullptr);
    QVector <Paciente> clientes;

    void inserir_cliente(Paciente p);
    int size();
    void clear();

    Paciente operator[](int i);

signals:

public slots:
};

#endif // CLIENTELA_H
