#ifndef PACIENTES_H
#define PACIENTES_H

#include <QObject>

class pacientes : public QObject
{
    Q_OBJECT
public:
    explicit pacientes(QObject *parent = nullptr);

signals:

public slots:
};

#endif // PACIENTES_H
