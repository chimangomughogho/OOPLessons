#include <iostream>
#include "Student.h"
#include "Lecturer.h"
using namespace std;

int main() {
    cout << "Student Information\n";
    Student student("Chimango", "UNIMA329");
    student.displayStudentInfo();

    cout << endl;
    cout << "Lecturer Information\n";
    Lecturer lecturer("Mwawi Msiska", "UNIMA35f" );
    lecturer.displayLecturerInfo();
    return 0;
}