#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : firstName("Unknown"), lastName("Unknown"), middleName("Unknown"), age(0), weight(0.0) {
    cout << "Person object created (default)" << endl;
}

Person::Person(string fn, string ln, string mn, int a, float w) : firstName(fn), lastName(ln), middleName(mn), age(a), weight(w) {
    cout << "Person object created (parameterized)" << endl;
}

Person::~Person() {
    cout << "Person object destroyed" << endl;
}

void Person::print() const {
    cout << "Full Name: " << firstName << " " << middleName << " " << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << " kg" << endl;
}
