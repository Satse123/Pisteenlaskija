#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap tausta("C:/Users/SamuKorhonen/Documents/Qt/Pisteenlaskija/Media/tausta.bmp");
    tausta = tausta.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, tausta);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}
