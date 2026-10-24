#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Student : public Person{
    private:
        string studentId;
        string course;
        double marks;

    public:
        Student(string name, string studentId, string course, double marks);
        void displayInfo() override;
        char getGrade() const;
};

