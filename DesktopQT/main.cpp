#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    std::string videoPath = "1.MOV";
 //   cv::VideoCapture cap(videoPath);
 //   cv::Mat frame;
//    CustomMultiTracker* c = new CustomMultiTracker("KCF", videoPath, frame);
    return a.exec();
}
