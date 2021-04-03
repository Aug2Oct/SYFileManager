#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "framelesshelper/framelesswindowsmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QtAcrylicMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    createWinId(); // Qt's internal function, make sure it's a top level window.
    const QWindow *win = windowHandle();

    FramelessWindowsManager::addWindow(win);
//    FramelessWindowsManager::addIgnoreObject(win, titleBarWidget.iconButton);
//    FramelessWindowsManager::addIgnoreObject(win, titleBarWidget.minimizeButton);
//    FramelessWindowsManager::addIgnoreObject(win, titleBarWidget.maximizeButton);
//    FramelessWindowsManager::addIgnoreObject(win, titleBarWidget.closeButton);
//    FramelessWindowsManager::addIgnoreObject(win, appMainWindow.menubar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

