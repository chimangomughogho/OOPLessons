#include <iostream>
#include "Person.h"
using namespace std;
Person::Person(string name){
    this->name = name;
    cout << "Person costructor created" << endl;
}

void Person::displayInfo(){
    cout << "Name: "  << name << endl;
}

Person::~Person(){
    cout << "Person Destructor in action" << endl;
}

