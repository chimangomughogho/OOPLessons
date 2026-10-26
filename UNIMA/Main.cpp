#include <iostream>
#include <array>
#include "Student.h"
#include "Lecturer.h"
using namespace std;

int main() {

    Student student("Chimango", "UNIMA329");
    Lecturer lecturer("Mwawi Msiska", "UNIMA35f" );

    cout << "\n";

    Person* p2 = &lecturer;
    Person* p1 = &student;

    // Person* person[] = {&lecturer, &student};

    array<Person*, 2> person;
    person[0] = &student;
    person[1] = &lecturer;

    for(int i = 0; i < person.size(); i++){
        person[i]->displayInfo();
        cout << endl;
    }
    return 0;
}