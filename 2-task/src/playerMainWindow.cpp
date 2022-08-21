#include "playerMainWindow.h"
#include "./ui_player.h"

PlayerMainWindow::PlayerMainWindow(QWidget* parent): QMainWindow(parent), playerWindow(new Ui::MainWindow) {
    playerWindow->setupUi(this);
};

PlayerMainWindow::~PlayerMainWindow() {
    delete playerWindow;
}