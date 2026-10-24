#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(){
}

Person::Person(string nationalId, string name, int age){
    this->nationalId = nationalId;
    this->name = name;
    this->age = age;
}

Person::~Person() = default;

void Person::displayInfo(){
        cout << "Name: " << name << endl;
    }
string Person::getNationalId() const{
    return nationalId;
}
