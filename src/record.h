#ifndef RECORD_H
#define RECORD_H

#include "information.h"
// class record, each object of this class contains all information about 1 person
class record {
public:
    int ID                     {};
    std::string name           {};
    std::string surname        {};
    int age                    {};
    information person_info    {};  //

    record(int fID,std::string fname,std::string fsurname,int fage,information fperson_info=information()); //constructor


};


#endif // RECORD_H
