#include <iostream>
#pragma once
using namespace std;

class Person{
    protected:
        string name;

    public:
        Person(string name);
        virtual ~Person();
        virtual void displayInfo() = 0;

};