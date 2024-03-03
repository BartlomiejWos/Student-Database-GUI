#include "record.h"
//initializer constructor for record class
record::record(int fID, std::string fname, std::string fsurname,int fage,information fperson_info){
    ID=fID;
    name=fname;
    surname=fsurname;
    age=fage;
    person_info=fperson_info;
}
