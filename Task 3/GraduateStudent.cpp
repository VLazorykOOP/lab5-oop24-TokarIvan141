#include "GraduateStudent.h"
#include <iostream>

GraduateStudent::GraduateStudent() : Student(), thesisTopic("None") {
    cout << "GraduateStudent created (default)" << endl;
}

GraduateStudent::GraduateStudent(string fn, string ln, string mn, int a, float w, int gr, string topic)
        : Student(fn, ln, mn, a, w, gr), thesisTopic(topic) {
    cout << "GraduateStudent created (parameterized)" << endl;
}

GraduateStudent::GraduateStudent(const GraduateStudent& other)
        : Student(other), thesisTopic(other.thesisTopic) {
    cout << "GraduateStudent copied" << endl;
}

GraduateStudent& GraduateStudent::operator=(const GraduateStudent& other) {
    if (this != &other) {
        Student::operator=(other);
        thesisTopic = other.thesisTopic;
    }
    cout << "GraduateStudent assigned" << endl;
    return *this;
}

GraduateStudent::~GraduateStudent() {
    cout << "GraduateStudent destroyed" << endl;
}

void GraduateStudent::print() const {
    Student::print();
    cout << ", Thesis Topic: " << thesisTopic << endl;
}

ostream& operator<<(ostream& os, const GraduateStudent& gs) {
    os << gs.firstName << " " << gs.lastName << " " << gs.middleName
       << ", Age: " << gs.age << ", Weight: " << gs.weight
       << ", Grade: " << gs.grade << ", Thesis Topic: " << gs.thesisTopic;
    return os;
}

istream& operator>>(istream& is, GraduateStudent& gs) {
    is >> gs.firstName >> gs.lastName >> gs.middleName >> gs.age >> gs.weight >> gs.grade >> ws;
    getline(is, gs.thesisTopic);
    return is;
}
