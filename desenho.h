#ifndef DESENHO_H
#define DESENHO_H

#include <QWidget>

class Desenho : public QWidget
{
    Q_OBJECT
public:
    explicit Desenho(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event); //reconfiguração da tela, quando se mexe nas dimensões

signals:

public slots:
};

#endif // DESENHO_H
