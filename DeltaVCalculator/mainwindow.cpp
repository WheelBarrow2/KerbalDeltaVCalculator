#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->statusBar()->setSizeGripEnabled(false);
    this->setWindowFlags(this->windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
    QIcon icon = QIcon("deltavcalculator.icns");
    this->setWindowIcon(icon);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mass_editingFinished()
{
    currentDeltaV->mass=ui->mass->text().toDouble();
    ui->ans->setText(currentDeltaV->calculateDeltaV());
}

void MainWindow::on_isp_editingFinished()
{
    currentDeltaV->isp=ui->isp->text().toDouble();
    ui->ans->setText(currentDeltaV->calculateDeltaV());
}

void MainWindow::on_fuel_editingFinished()
{
    currentDeltaV->fuel=ui->fuel->text().toDouble();
    ui->ans->setText(currentDeltaV->calculateDeltaV());
}

void MainWindow::on_pushButton_2_clicked()
{
    currentDeltaV->calculateDeltaV();
}
