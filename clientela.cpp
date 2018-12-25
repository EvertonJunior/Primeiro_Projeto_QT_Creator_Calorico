#include "clientela.h"

Clientela::Clientela(QObject *parent) : QObject(parent)
{

}
void Clientela::inserir_cliente(Paciente p)
{
    clientes.push_back(p);
}

int Clientela::size()
{
    return clientes.size();
}

void Clientela::clear()
{
    clientes.clear();
}

Paciente Clientela::operator[](int i)
{
    return clientes[i];
}
