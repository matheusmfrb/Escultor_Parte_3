#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Sculptor.h"
#include "dialogdimensoes.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void fecharProg();
    void abreDimensoes();

private:
    Ui::MainWindow *ui;
    DialogDimensoes d;
};
#endif // MAINWINDOW_H
