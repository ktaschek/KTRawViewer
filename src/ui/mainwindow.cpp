#include "mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Very simple central widget – just a label
    QLabel *label = new QLabel("Hello, Raw Photo Viewer!", this);
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);

    // Optional: set window title
    setWindowTitle("KTRawViewer");
}

MainWindow::~MainWindow()
{
}
