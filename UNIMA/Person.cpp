#include <iostream>
#include "Person.h"
using namespace std;
Person::Person(string name){
    this->name = name;
}

void Person::displayInfo(){
    cout << "Name: "  << name << endl;
}
