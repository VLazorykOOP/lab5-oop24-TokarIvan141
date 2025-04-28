#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "../Task1/Student.h"

using namespace std;

class GraduateStudent : public Student {
private:
    string thesisTopic;

public:
    GraduateStudent();
    GraduateStudent(string fn, string ln, string mn, int a, float w, int gr, string topic);
    GraduateStudent(const GraduateStudent& other);
    GraduateStudent& operator=(const GraduateStudent& other);
    ~GraduateStudent() override;

    void print() const override;

    friend ostream& operator<<(ostream& os, const GraduateStudent& gs);
    friend istream& operator>>(istream& is, GraduateStudent& gs);
};

#endif
