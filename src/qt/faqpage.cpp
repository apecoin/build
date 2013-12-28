#include "faqpage.h"
#include "ui_faqpage.h"

FaqPage::FaqPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FaqPage)
{
    ui->setupUi(this);

    setFixedSize(400, 420);


    //connect(readTimer, SIGNAL(timeout()), this, SLOT(readProcessOutput()));

    //connect(ui->startButton, SIGNAL(pressed()), this, SLOT(startPressed()));
    //connect(ui->typeBox, SIGNAL(currentIndexChanged(int)), this, SLOT(typeChanged(int)));
    //connect(ui->debugCheckBox, SIGNAL(toggled(bool)), this, SLOT(debugToggled(bool)));
    //connect(minerProcess, SIGNAL(started()), this, SLOT(minerStarted()));
    //connect(minerProcess, SIGNAL(error(QProcess::ProcessError)), this, SLOT(minerError(QProcess::ProcessError)));
    //connect(minerProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(minerFinished()));
    //connect(minerProcess, SIGNAL(readyRead()), this, SLOT(readProcessOutput()));
}

FaqPage::~FaqPage()
{

    delete ui;
}

void FaqPage::setModel(ClientModel *model)
{
    this->model = model;

}


