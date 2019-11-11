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
    brush.setColor(Qt::white); //fundo branco
    brush.setStyle(Qt::SolidPattern); //cor solida
    pen.setColor(Qt::black); //cor da caneta
    pen.setWidth(3); //pixels de largura do traço
}
