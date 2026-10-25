#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Student : public Person{
private:
    string studentId;

public:
    Student(string name, string studentI);
    void displayStudentInfo();
};