#ifndef PACIENTE_H
#define PACIENTE_H

#include <QObject>

class Paciente
{

public:
    //explicit Paciente(QObject *parent = nullptr);
    QString nome_paciente;
    QString comida, bebida;
    int qnt_comida, qnt_bebida, qnt_calorias_total;

    Paciente();
    Paciente(QString n, QString c, QString b, int q);


    QString getNome() const;
    void setNome(const QString &value);

    QString getComida() const;
    void setComida(QString c);

    QString getBebida() const;
    void setBebida (QString b);


    int getQuantidade_Comida() const;
    void setQuantidade_Comida(int c);

    int getQuantidade_Bebida() const;
    void setQuantidade_Bebida(int b);

    int getQuantidade_CaloriasTotal();

};

#endif // PACIENTE_H
