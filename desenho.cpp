#include "desenho.h"
#include <QPainter> //usado para fazer o desenhda área
#include <QBrush> //usado para preencher a área de desenho
#include <QPen> // usado para trabalhar o contorno da área de desenho

Desenho::Desenho(QWidget *parent) : QWidget(parent){

}

void Desenho::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    brush.setColor(QColor(218,218,218)); //fundo branco
    brush.setStyle(Qt::SolidPattern); //cor solida
    pen.setColor(QColor(0,0,0)); //cor da caneta
    pen.setWidth(2); //pixels de largura do traço
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());
}
