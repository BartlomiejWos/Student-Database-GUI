#include "database_options.h"

//Default- empty constructor
database_options::database_options()
{

}



bool database_options::is_empty(ifstream& file_name)
{
    return file_name.peek() == ifstream::traits_type::eof(); //check if file is empty
}




bool database_options::load_json_file(vector <record>& database, json& database_json, string& file_name){

   ifstream myinput(file_name);

    if(!is_empty(myinput)){ // if file is not empty
        auto parse_file = json::parse(myinput);  //parse json file
        json readed_database {};
        readed_database = parse_file["configuration"]; //read existing database to json object


        information inf {};
        record r =record(0,"X","X",0,inf);

        for (auto const &read_record :readed_database){

            r.ID=read_record[0];
            r.name=read_record[1];
            r.surname=read_record[2];
            r.age=read_record[3];
            r.person_info.faculty=read_record[4];
            r.person_info.field=read_record[5];
            r.person_info.semester=read_record[6];
            r.person_info.email=read_record[7];
            r.person_info.study_mode=read_record[8]; //asign values from file to correspodnig variables

            database.push_back(r);
            database_json["configuration"].push_back(read_record);


        }

        return true; // return true if database has been loaded

    }

    else{

        return false; // return false if file is empty
    }

}


void database_options::save_to_json(json& database_json, string &file_name){

    ofstream writer;  // file descriptor

    writer.open(file_name); // open file

    writer<<database_json.dump(9)<<std::endl; // save data to file, dump means number of space, in this case 9 because there is 9 components of record object


    writer.close(); //close file
}

string database_options::generate_email(string ID, string name, string surname){

    string created_email {};  // variable which store generated email

    for (int i=0;i<surname.size();i++){
        surname[i]=tolower(surname[i]);  // conversion to small letters

    }

    name[0]=tolower(name[0]); // conversion to small letter
    created_email=name[0]+surname+ID+"@student.agh.edu.pl"; //create email

    return created_email; //return created email
}


void database_options::delete_record(vector <record>& database, json& database_json, QString student_id){


    for (int i=0;i <database.size(); i++){

            if (database[i].ID ==student_id.toInt()) {

               database.erase(database.begin() + i); //erase specify record
               database_json["configuration"].erase(database_json["configuration"].begin()+i); //erase specify record
            }
        }

}





void database_options::Add_Record(vector <record>& database, json& database_json,record r){

    json record_json {};

    record_json.push_back(r.ID);  // push_back to json object , all push_back's are intentional treatment in order to keep the structure of the list when saving to file
    record_json.push_back(r.name);
    record_json.push_back(r.surname);
    record_json.push_back(r.age);
    record_json.push_back(r.person_info.faculty);
    record_json.push_back(r.person_info.field);
    record_json.push_back(r.person_info.semester);
    record_json.push_back(r.person_info.email);
    record_json.push_back(r.person_info.study_mode);

    database.push_back(r);
    database_json["configuration"].push_back(record_json);

}






string database_options::Display_Record(vector <record>& database,QString student_id) {

    string record_to_display {};

   for (auto const &it :database){   //zapobieganie tworzeniu kopii
       if (it.ID==student_id.toInt()){ // if ID was found , add information about searched person to variable


          record_to_display="ID: "+to_string(it.ID)+'\n'+
                                  "Name: "+it.name +'\n'+
                             "Surname: "+it.surname+'\n'+
                          "Age: "+to_string(it.age)+'\n'+
                 "Faculty: "+it.person_info.faculty+'\n'+
                     "Field: "+it.person_info.field+'\n'+
    "Semester: "+to_string(it.person_info.semester)+'\n'+
                     "Email: "+it.person_info.email+'\n'+
           "Study Mode: "+it.person_info.study_mode+'\n'+
                   "-----------------------"+'\n';
        }
    }
   return record_to_display; //return record to display in ui

}

string database_options::Display_All_Records(vector <record>& database) {

    int number_of_records {};
    string all_records {};

     for (auto const &it : database){
        number_of_records+=1; // calculate number of students

               all_records+="ID: "+to_string(it.ID)+'\n'+    // add all data to one variable to display in ui
                                  "Name: "+it.name +'\n'+
                             "Surname: "+it.surname+'\n'+
                          "Age: "+to_string(it.age)+'\n'+
                 "Faculty: "+it.person_info.faculty+'\n'+
                     "Field: "+it.person_info.field+'\n'+
    "Semester: "+to_string(it.person_info.semester)+'\n'+
                     "Email :"+it.person_info.email+'\n'+
           "Study Mode: "+it.person_info.study_mode+'\n'+
                   "-----------------------"+'\n';
     }

   all_records=all_records+'\n'+"Total number of students: "+to_string(number_of_records);
   return all_records; // return all records to display



}



