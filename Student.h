#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "UniversityMember.h"
using namespace std;

class Student: virtual public UniversityMember
{
private:
    double cgpa;
public:
    Student(string name, int memberId, double cgpa);
    double getCGPA();
    void updateCGPA(double newCGPA);
    void displayRole() override;
};
#endif