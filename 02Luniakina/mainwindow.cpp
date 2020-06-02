#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QResizeEvent>
#include <QLabel>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* ev){
    ui->label_width->setText("Width: " + QString::number(ev->size().width()));
    ui->label_height->setText("Height: " + QString::number(ev->size().height()));
    }
