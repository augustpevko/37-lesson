#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QValidator>

namespace Ui { 
    class MainWindow; 
}

class CalculatorMainWindow: public QMainWindow {
    Q_OBJECT
    Ui::MainWindow* calculatorWindow = nullptr;
    QLineEdit* qLE_number_1 = nullptr;
    QLineEdit* qLE_number_2 = nullptr;
    QRegExpValidator* qValidator = nullptr;

    QLineEdit* qLE_answer = nullptr;

public:
    explicit CalculatorMainWindow(QWidget* parent = nullptr);
    ~CalculatorMainWindow();

public slots:
    void addOperation();
    void subtractionOperation();
    void divisionOperation();
    void multiplicationOperation();
};