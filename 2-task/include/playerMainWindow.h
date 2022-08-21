#pragma once
#include <QMainWindow>

namespace Ui { 
    class MainWindow; 
}

class PlayerMainWindow: public QMainWindow {
    Q_OBJECT
    Ui::MainWindow* playerWindow = nullptr;

public:
    explicit PlayerMainWindow(QWidget* parent = nullptr);
    ~PlayerMainWindow();
};