#include "ui/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tableWidget = new SampleTableWidget(this);
    this->setCentralWidget(tableWidget);
}

MainWindow::~MainWindow()
{
    delete tableWidget;
    delete ui;
}
