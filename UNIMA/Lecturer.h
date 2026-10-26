#ifndef LECTURER_H
#define LECTURER_H
#include <string>
#include "Person.h"
using namespace std;

class Lecturer : public Person{
private:
    string staffId;

public:
    Lecturer(string name, string staffId);
    ~Lecturer() override;
    void displayInfo() override;

};


#endif