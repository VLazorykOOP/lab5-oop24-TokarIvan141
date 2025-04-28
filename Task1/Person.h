#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    string middleName;
    int age;
    float weight;

public:
    Person();
    Person(string fn, string ln, string mn, int a, float w);
    virtual ~Person();
    virtual void print() const;
};

#endif
