#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
using namespace std;

class Student : public Person {
protected:
    int grade;

public:
    Student();
    Student(string fn, string ln, string mn, int a, float w, int gr);
    ~Student() override;
    void print() const override;
};

#endif
