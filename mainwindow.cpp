#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlags(Qt::WindowTitleHint | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

