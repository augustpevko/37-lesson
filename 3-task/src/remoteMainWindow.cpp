#include "remoteMainWindow.h"
#include "./ui_remote.h"

RemoteMainWindow::RemoteMainWindow(QWidget* parent): QMainWindow(parent), remoteWindow(new Ui::RemoteWindow), qt_tmr(new QTimer(this)) {
    remoteWindow->setupUi(this);
    qLE_currentChannel = remoteWindow->lineEdit;
    qt_progressBar = remoteWindow->progressBar;

    qt_tmr->setSingleShot(true);
    connect(qt_tmr, &QTimer::timeout, [this]() {
        qLE_currentChannel->setText(QString::number(qt_str.toInt()));
        qt_str = "";
    });
};

RemoteMainWindow::~RemoteMainWindow() {
    delete remoteWindow;
}

void RemoteMainWindow::clickedNumber1() {
    qt_str += "1";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber2() {
    qt_str += "2";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber3() {
    qt_str += "3";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber4() {
    qt_str += "4";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber5() {
    qt_str += "5";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber6() {
    qt_str += "6";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber7() {
    qt_str += "7";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber8() {
    qt_str += "8";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber9() {
    qt_str += "9";
    qt_tmr->start(3000);
}
void RemoteMainWindow::clickedNumber0() {
    qt_str += "0";
    qt_tmr->start(3000);
}

void RemoteMainWindow::prevOne() {
    qLE_currentChannel->setText(QString::number((qLE_currentChannel->text().toInt()) - 1));
}
void RemoteMainWindow::nextOne() {
    qLE_currentChannel->setText(QString::number((qLE_currentChannel->text().toInt()) + 1));
}
void RemoteMainWindow::downVolume() {
    qt_progressBar->setValue(qt_progressBar->value() - 10);
}
void RemoteMainWindow::upVolume() {
    qt_progressBar->setValue(qt_progressBar->value() + 10);
}