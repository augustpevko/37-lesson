#include <QApplication>
#include "remoteMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    RemoteMainWindow window(nullptr);
    window.show();
    
    return QApplication::exec();
}