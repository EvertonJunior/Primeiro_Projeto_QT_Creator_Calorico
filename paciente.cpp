#include "paciente.h"

Paciente::Paciente()
{

}

Paciente::Paciente(QString n, QString c, QString b, int q)
{
    nome_paciente = n;
    comida = c;
    bebida = b;
    qnt_calorias_total = q;
}
void Paciente::setNome(const QString &value)
{
    nome_paciente = value;
}
QString Paciente::getNome() const
{
    return nome_paciente;
}
void Paciente::setComida(QString c)
{
    comida = c;
}
QString Paciente::getComida() const
{
    return comida;
}
void Paciente::setBebida(QString b)
{
    bebida = b;
}
QString Paciente::getBebida() const
{
    return bebida;
}
int Paciente::getQuantidade_Comida() const
{
    return qnt_comida;
}

void Paciente::setQuantidade_Comida(int c)
{
    qnt_comida = c;
}

int Paciente::getQuantidade_Bebida() const
{
    return qnt_bebida;
}

void Paciente::setQuantidade_Bebida(int b)
{
    qnt_bebida = b;
}
int Paciente::getQuantidade_CaloriasTotal()
{


    int cal_comida; //para realizar os calculos de caloria
    int cal_bebida;


//              ######## COMIDA ########

        if(getComida() == "lasanha")
        {
            switch (getQuantidade_Comida())
            {
            case 200:

            cal_comida = 270;
            break;

            case 300:

            cal_comida = 405;
            break;

            case 350:

            cal_comida = 473;
            break;

            }
        }


    if(getComida() == "arroz")
    {
        switch (getQuantidade_Comida())
        {
            case 200:

            cal_comida = 260;
            break;

            case 300:

            cal_comida = 390;
            break;

            case 350:

            cal_comida = 455;
            break;

        }
    }


    if(getComida() == "carne")
    {
        switch (getQuantidade_Comida())
        {
            case 200:

            cal_comida = 286;
            break;

            case 300:

            cal_comida = 429;
            break;

            case 350:

            cal_comida = 501;
            break;

        }
    }


    if(getComida() == "feijoada")
    {
        switch (getQuantidade_Comida())
        {
            case 200:

            cal_comida = 2000;
            break;

            case 300:

            cal_comida = 3000;
            break;

            case 350:

            cal_comida = 3500;
            break;

        }
    }


    if(getComida() == "batata")
    {
        switch (getQuantidade_Comida())
        {
            case 200:

            cal_comida = 534;
            break;

            case 300:

            cal_comida = 801;
            break;

            case 350:

            cal_comida = 935;
            break;

        }
    }


    //              ######## BEBIDA ########

    QString bebida_3 = "agua";

    if(getBebida() == "suco")
    {
        switch (getQuantidade_Bebida())
        {
            case 200:

            cal_bebida = 20;
            break;

            case 350:

            cal_bebida = 35;
            break;

            case 500:

            cal_bebida = 50;
            break;

        }
    }
    if(getBebida() == "refrigerante")
    {
        switch (getQuantidade_Bebida())
        {
            case 200:

            cal_bebida = 8400;
            break;

            case 350:

            cal_bebida = 147000;
            break;

            case 500:

            cal_bebida = 210000;
            break;

        }
    }

    return qnt_calorias_total = cal_comida + cal_bebida;
}


