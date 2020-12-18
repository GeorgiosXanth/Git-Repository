#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
	
// Example of slot definition in mainwindow.h---------------------------
public slots:
void handleAddButton();

public slots:
void handleEditButton();

public slots:
void handleRemoveButton();
// ---------------------------------------------------------------------

};

#endif // MAINWINDOW_H
