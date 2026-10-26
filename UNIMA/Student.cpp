#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name, string studentId) : Person(name), studentId(studentId) {
    cout << "Student costructor created" << endl;
}

void Student::displayInfo(){
    Person::displayInfo();
    cout << "Student ID: " << studentId << endl;
}

Student::~Student(){
    cout << "Student destructor in action" << endl;
}