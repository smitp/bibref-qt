#include "BibrefMainWindow.h"
#include "ui_BibrefMainWindow.h"

BibrefMainWindow::BibrefMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BibrefMainWindow)
{
    ui->setupUi(this);
}

BibrefMainWindow::~BibrefMainWindow()
{
    delete ui;
}
