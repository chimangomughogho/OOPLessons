#include <iostream>
#include "Student.h"
#include "Lecturer.h"
using namespace std;

int main() {

    Student student("Chimango", "UNIMA329");
    Lecturer lecturer("Mwawi Msiska", "UNIMA35f" );
    
    Person* p2 = &lecturer;
    Person* p1 = &student;

    cout << "Student Information:\n";
    p1->displayInfo();

    cout << endl;

    cout << "Lecturer Information:\n";
    p2->displayInfo();

    return 0;
}