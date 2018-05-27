#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv/highgui.h>
#include <opencv2/core.hpp>
#include <QImage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cv::Mat image(320, 240, CV_8UC3, cvScalar(0,0,0));

    QImage qImage = QImage((const unsigned char*)(image.data), image.cols,image.rows,QImage::Format_RGB888).rgbSwapped();
}

MainWindow::~MainWindow()
{
    delete ui;
}
