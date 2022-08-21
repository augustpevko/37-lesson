#include <QApplication>
#include "playerMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    PlayerMainWindow window(nullptr);
    window.show();
    
    return QApplication::exec();
}