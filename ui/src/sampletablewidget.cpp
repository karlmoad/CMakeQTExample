#include "ui/sampletablewidget.h"
#include "ui_sampletablewidget.h"

SampleTableWidget::SampleTableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SampleTableWidget)
{
    ui->setupUi(this);
}

SampleTableWidget::~SampleTableWidget()
{
    delete ui;
}
