#include <iostream>
#pragma once
using namespace std;

class Person{
    private:
        string nationalId;        
    public:
        int age;
        string name;

    public:
        Person();
        Person(string name);
        Person(string nationalId, string name, int age);
        virtual ~Person();

        virtual void displayInfo();
        string getNationalId() const;
        



};