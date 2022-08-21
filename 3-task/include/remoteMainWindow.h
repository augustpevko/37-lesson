#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QTimer>

namespace Ui { 
    class RemoteWindow; 
}

class RemoteMainWindow: public QMainWindow {
    Q_OBJECT
    Ui::RemoteWindow* remoteWindow = nullptr;
    QTimer* qt_tmr = nullptr;
    QLineEdit* qLE_currentChannel = nullptr;
    QProgressBar* qt_progressBar = nullptr;
    QString qt_str = "";

public:
    explicit RemoteMainWindow(QWidget* parent = nullptr);
    ~RemoteMainWindow();

public slots:
    void clickedNumber1();
    void clickedNumber2();
    void clickedNumber3();
    void clickedNumber4();
    void clickedNumber5();
    void clickedNumber6();
    void clickedNumber7();
    void clickedNumber8();
    void clickedNumber9();
    void clickedNumber0();
    void prevOne();
    void nextOne();
    void downVolume();
    void upVolume();
};