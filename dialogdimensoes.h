#ifndef DIALOGDIMENSOES_H
#define DIALOGDIMENSOES_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogDimensoes;
}

class DialogDimensoes : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDimensoes(QWidget *parent = nullptr);
    ~DialogDimensoes();
    QString leDimX();
    QString leDimY();
    QString leDimZ();

private:
    Ui::DialogDimensoes *ui;
};

#endif // DIALOGDIMENSOES_H
