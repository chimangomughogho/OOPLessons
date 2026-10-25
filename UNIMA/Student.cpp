#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name, string studentId) : Person(name), studentId(studentId) {

}

void Student::displayStudentInfo(){
    displayInfo();
    cout << "Student ID: " << studentId << endl;
}