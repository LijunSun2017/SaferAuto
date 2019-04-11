#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QStyle>
#include <QTimer>

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QRect screen_geometry = QApplication::desktop() -> availableGeometry();
    double screen_width = screen_geometry.width();
    double screen_height = screen_geometry.height();

    double reduction_proportion = 80.0 / 100.0;
    int reducted_width = screen_width * reduction_proportion;
    int reducted_height = screen_height * reduction_proportion;

    int x_pos = screen_width / 2;
    int y_pos = screen_height / 2;

    this->resize(reducted_width, reducted_height);
    //this->move(x_pos, y_pos);
    this->setWindowTitle("SaferAuto");

    ui->setupUi(this);

    Timer = new QTimer(this);
    connect(Timer, SIGNAL(timeout()), this, SLOT(display_image()));
    Timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::display_image(cv::Mat mat_img, QApplication* app) {
    QImage imdisplay((uchar*)mat_img.data, mat_img.cols, mat_img.rows, mat_img.step, QImage::Format_RGB888); //Converts the CV image into Qt standard format
    ui->detectiondisplay->setPixmap(QPixmap::fromImage(imdisplay));
    ui->detectiondisplay->update();
    app->processEvents();
    //ui->retranslateUi(this);
}