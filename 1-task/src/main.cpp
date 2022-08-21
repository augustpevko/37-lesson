#include <QApplication>
#include "calculatorMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalculatorMainWindow window(nullptr);
    window.show();
    
    return QApplication::exec();
}