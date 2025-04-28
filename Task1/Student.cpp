#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() : Person(), grade(1) {
    cout << "Student object created (default)" << endl;
}

Student::Student(string fn, string ln, string mn, int a, float w, int gr)
        : Person(fn, ln, mn, a, w), grade(gr) {
    cout << "Student object created (parameterized)" << endl;
}

Student::~Student() {
    cout << "Student object destroyed" << endl;
}

void Student::print() const {
    Person::print();
    cout << "Grade: " << grade << endl;
}
