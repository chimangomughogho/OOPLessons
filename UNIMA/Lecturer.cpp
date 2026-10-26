#include <iostream>
#include "Lecturer.h"
using namespace std;

Lecturer::Lecturer(string name, string staffId) : Person(name), staffId(staffId){

}

void Lecturer::displayInfo(){
    Person::displayInfo();
    cout << "Staff ID: " << staffId << endl;
} 