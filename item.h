#ifndef ITEM_H
#define ITEM_H

#include <QObject>

#include "paciente.h"

class Item : public QObject
{
    Q_OBJECT
public:
    explicit Item(QObject *parent = nullptr);

    void inserir_paciente();

signals:

public slots:
};

#endif // ITEM_H
