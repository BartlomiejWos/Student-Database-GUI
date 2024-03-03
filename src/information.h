#ifndef INFORMATION_H
#define INFORMATION_H

#include <string>


using std::string;

// subclass information it is included in Record class
class information{

public:
    string faculty     {};
    string field       {};
    int semester       {};
    string email       {};
    string study_mode  {};

    information(std::string ffaculty="X" , string ffield="X", int fsemester=0, string femail="X",string study_mode="X"); //initializer constructor



};


#endif // INFORMATION_H
