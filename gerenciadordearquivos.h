#ifndef GERENCIADORDEARQUIVOS_H
#define GERENCIADORDEARQUIVOS_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <fstream>
#include <QDebug>
#include <QVector>
#include <QString>

#include "clientela.h"
#include "paciente.h"

class GerenciadorDeArquivos
{
public:
    GerenciadorDeArquivos();
    static bool SalvarClientela(QString &arquivo, Clientela &clientela);
    static bool CarregarClientela(QString &arquivo, Clientela &clientela);
};

#endif // GERENCIADORDEARQUIVOS_H
