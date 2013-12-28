#ifndef FAQPAGE_H
#define FAQPAGE_H

#include "clientmodel.h"

#include <QWidget>

#include <QDir>
#include <QFile>
#include <QProcess>
#include <QTime>
#include <QTimer>
#include <QStringList>
#include <QMap>
#include <QSettings>


namespace Ui {
    class FaqPage;
}
class ClientModel;

class FaqPage : public QWidget
{
    Q_OBJECT

public:
    explicit FaqPage(QWidget *parent = 0);
    ~FaqPage();

    void setModel(ClientModel *model);

public slots:

private slots:

private:
    Ui::FaqPage *ui;
    ClientModel *model;

};

#endif // FAQPAGE_H
