#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include "dialogdimensoes.h"
#include "Sculptor.h"
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);

    connect(ui->actionDimensoes,
            SIGNAL(triggered(bool)),
            this,
            SLOT(abreDimensoes()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::fecharProg(){
    exit(0);
}

void MainWindow::abreDimensoes(){
    DialogDimensoes dimx, dimy, dimz;
    if(dimx.exec()||dimy.exec()||dimz.exec()==QDialog::Accepted){
        qDebug() << dimx.leDimX() << dimy.leDimY() << dimz.leDimZ();
    }
}

