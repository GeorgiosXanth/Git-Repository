// mainwindow.h---------------------------------------------------------------
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vtkSmartPointer.h>
#include <vtkRenderer.h>
#include <vtkDataSetMapper.h>
#include <vtkNamedColors.h>

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget * parent = 0);
    ~MainWindow();
public slots:
    void handleLoadButton();
    void handleObjectRedButton();
    void handleObjectGreenButton();
    void handleObjectBlueButton();
private:
    Ui::MainWindow * ui;
    std::string stlFile;
    vtkSmartPointer<vtkRenderer> renderer;
    vtkSmartPointer<vtkDataSetMapper> mapper;
    vtkSmartPointer<vtkActor> actor;
    vtkSmartPointer<vtkNamedColors> colors;
};
#endif // MAINWINDOW_H
//mainwindow.h----------------------------------------------------------------
