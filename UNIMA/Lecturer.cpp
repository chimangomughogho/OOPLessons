#include <iostream>
#include "Lecturer.h"
using namespace std;

Lecturer::Lecturer(string name, string staffId) : Person(name), staffId(staffId){
    cout << "Lecturer costructor created" << endl;
}

void Lecturer::displayInfo(){
    Person::displayInfo();
    cout << "Staff ID: " << staffId << endl;
} 

Lecturer::~Lecturer(){
    cout << "Lecturer destructor in action" << endl;
}