#include "calculatorMainWindow.h"
#include "./ui_calculator.h"

CalculatorMainWindow::CalculatorMainWindow(QWidget* parent): QMainWindow(parent), calculatorWindow(new Ui::MainWindow), qValidator(new QRegExpValidator(QRegExp("[-]{0,1}\\d{0,}\\.\\d{0,}"), this)) {
    calculatorWindow->setupUi(this);

    qLE_number_1 = calculatorWindow->number_1;
    qLE_number_1->setValidator(qValidator);

    qLE_number_2 = calculatorWindow->number_2;
    qLE_number_2->setValidator(qValidator);

    qLE_answer = calculatorWindow->answer;
};

CalculatorMainWindow::~CalculatorMainWindow() {
    delete calculatorWindow;
}

void CalculatorMainWindow::addOperation() {
    bool isOkNumber_1(false);
    double number1 = qLE_number_1->text().toDouble(&isOkNumber_1);
    bool isOkNumber_2(false);
    double number2 = qLE_number_2->text().toDouble(&isOkNumber_2);

    QString result;
    if (isOkNumber_1 && isOkNumber_2) {
        result = QString::number(number1 + number2);
    }
    else {
        result = "err";
    }
    qLE_answer->setText(result);
}

void CalculatorMainWindow::subtractionOperation() {
    bool isOkNumber_1(false);
    double number1 = qLE_number_1->text().toDouble(&isOkNumber_1);
    bool isOkNumber_2(false);
    double number2 = qLE_number_2->text().toDouble(&isOkNumber_2);

    QString result;
    if (isOkNumber_1 && isOkNumber_2) {
        result = QString::number(number1 - number2);
    }
    else {
        result = "err";
    }
    qLE_answer->setText(result);
}   

void CalculatorMainWindow::divisionOperation() {
    bool isOkNumber_1(false);
    double number1 = qLE_number_1->text().toDouble(&isOkNumber_1);
    bool isOkNumber_2(false);
    double number2 = qLE_number_2->text().toDouble(&isOkNumber_2);
    isOkNumber_2 = (number2 == 0 ? false : isOkNumber_2);

    QString result;
    if (isOkNumber_1 && isOkNumber_2) {
        result = QString::number(number1 / number2);
    }
    else {
        result = "err";
    }
    qLE_answer->setText(result);
}

void CalculatorMainWindow::multiplicationOperation() {
    bool isOkNumber_1(false);
    double number1 = qLE_number_1->text().toDouble(&isOkNumber_1);
    bool isOkNumber_2(false);
    double number2 = qLE_number_2->text().toDouble(&isOkNumber_2);

    QString result;
    if (isOkNumber_1 && isOkNumber_2) {
        result = QString::number(number1 * number2);
    }
    else {
        result = "err";
    }
    qLE_answer->setText(result);
}