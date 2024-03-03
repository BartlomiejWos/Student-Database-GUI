#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "information.h"
#include "record.h"
#include "database_options.h"

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Display_Record_clicked();

    void on_Add_Record_clicked();

    void on_save_to_json_clicked();

    void on_load_json_file_clicked();

    void on_Delete_Record_clicked();

    void on_ShowALLRecords_clicked();

private:
    Ui::MainWindow *ui;
    database_options select_option;

};






























#endif // MAINWINDOW_H
