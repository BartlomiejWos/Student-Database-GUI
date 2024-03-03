#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_Add_Record_clicked()
{

    QString student_id=ui->ID_add->text();  //assing text entered in front panel to  variables
    QString student_name=ui->Name_ad->text();
    QString student_surname=ui->Surname_add->text();
    QString student_age=ui->Age_add->text();
    QString student_faculty=ui->faculty->text();
    QString student_field=ui->field->text();
    QString student_semester=ui->semester->text();

    string study_mode {};

    if(ui->radioButton->isChecked()){
         study_mode ="full-time studies";
    }

    if(ui->radioButton_2->isChecked()){
         study_mode ="part-time studies";
    }


     string student_email =select_option.generate_email(student_id.toStdString(), student_name.toStdString(), student_surname.toStdString()); //generete email

     information info(student_faculty.toStdString(),student_field.toStdString(),student_semester.toInt(),student_email,study_mode); // constructor call (information class)

     record r(student_id.toInt(),student_name.toStdString(),student_surname.toStdString(),student_age.toInt(),info); //constructor call (record class)

     select_option.Add_Record(select_option.database,select_option.database_json,r); // add record

     QMessageBox::information(this,"Information","Record: "+student_id+" has been added to database"); // information box


}




void MainWindow::on_Delete_Record_clicked()
{
    QString student_id=ui->lineEdit->text(); // assing entered ID to variable
    select_option.delete_record(select_option.database,select_option.database_json,student_id); // delete record
    QMessageBox::information(this,"Information","Record: "+student_id+" has been deleted"); // information box
}




void MainWindow::on_Display_Record_clicked()
{
    QString student_id=ui->lineEdit->text(); // assing entered ID to variable

    string person_id=select_option.Display_Record(select_option.database, student_id); //return searched record

    ui->Display->setText(QString::fromStdString(person_id)); //display searched record

}


void MainWindow::on_ShowALLRecords_clicked()
{

     string all_records=select_option.Display_All_Records(select_option.database); //assign all records to variable


     ui->Display->setText(QString::fromStdString(all_records)); // display all records
}



void MainWindow::on_save_to_json_clicked()
{
    select_option.save_to_json(select_option.database_json,select_option.file_name); //save database to file

    QMessageBox::information(this,"Information","Data has been saved to file");
 }




void MainWindow::on_load_json_file_clicked()
{
   QString file_path=QFileDialog::getOpenFileName(this,"load database"); //assign path to database file

   ui->display_path->setText(file_path); //dusplay path

   select_option.file_name=file_path.toStdString(); //assing file path to main class

   bool info= select_option.load_json_file(select_option.database, select_option.database_json, select_option.file_name); //load databse

   if (info){

       QMessageBox::information(this,"Information","Data has been loaded from file"); // if database is not empty

   }

   else{

       QMessageBox::information(this,"Information","Your file is empty, there is nothing to read"); // if database is empty
   }

}





