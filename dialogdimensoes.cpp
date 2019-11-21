#include "dialogdimensoes.h"
#include "ui_dialogdimensoes.h"

DialogDimensoes::DialogDimensoes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDimensoes)
{
    ui->setupUi(this);
}

DialogDimensoes::~DialogDimensoes()
{
    delete ui;
}

QString DialogDimensoes::leDimX(){
    return ui->lineEditX->text();
}

QString DialogDimensoes::leDimY(){
    return ui->lineEditY->text();
}

QString DialogDimensoes::leDimZ(){
    return ui->lineEditZ->text();
}
