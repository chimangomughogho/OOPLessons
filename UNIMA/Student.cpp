#include <iostream>
#include <stdexcept>
#include "Student.h"
using namespace std;

Student::Student(string name, string studentId, string course, double marks) 
    :name(name), studentId(studentId), course(course), marks(marks) {
        if(marks < 0 || marks > 100){
            throw std::invalid_argument("Marks must be between 0 and 100");
        }
    } 

void Student::displayInfo(){
    Person::displayInfo();
    cout << "Student ID: " << studentId << endl;
    cout << "Course: " << course << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << marks << endl;
}

char Student::getGrade() const {
    if(marks >= 80) return 'A';
    if(marks >= 70) return 'B';
    if(marks >= 60) return 'C';
    if(marks >= 50) return 'D';
    
    return 'F';
}