#ifndef DATABASE_OPTIONS_H
#define DATABASE_OPTIONS_H

//includes - begin
#include "record.h"
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "json.hpp"
#include <QString>

//includes - end


//using - begin
using std::string, std::ofstream, std::ifstream,std::vector,std::string,std::to_string,std::tolower;
using json=nlohmann::json;

//using - end



// main class which contains functions to manage database
class database_options



{
public:
    vector <record> database {}; // vector of records which contains all information about students (database model)
    json database_json       {}; // json object which contains all information about students - necessary to load/save data from/into file
    string file_name         {}; // file path to database

    database_options(); //default empty constructor

    bool is_empty(ifstream& file_name); //check if file to load is empty
    bool load_json_file(vector <record>& database, json& database_json, string& file_name); // load database
    void save_to_json(json& database_json, string &file_name); //save data into file
    string generate_email(string ID, string name, string surname);  // create email
    void delete_record(vector <record>& database,json& jj,QString student_id); //delete record
    void Add_Record(vector <record>& database, json& database_json, record r); // add record
    string Display_Record(vector <record>& database,QString student_id);// display searched record
    string Display_All_Records(vector <record>& database); // display and count all records

};

#endif // DATABASE_OPTIONS_H
