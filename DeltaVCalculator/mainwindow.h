#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "deltavobject.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_mass_editingFinished();

    void on_isp_editingFinished();

    void on_fuel_editingFinished();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    deltaVObject *currentDeltaV = new deltaVObject();
};

#endif // MAINWINDOW_H
