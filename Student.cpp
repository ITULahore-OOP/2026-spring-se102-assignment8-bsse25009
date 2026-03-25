#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, int memberId, double cgpa)
    : UniversityMember(name, memberId)
{
    this->cgpa = cgpa;
}

double Student::getCGPA()
{
    return cgpa;
}

void Student::updateCGPA(double newCGPA)
{
    cgpa = newCGPA;
}

void Student::displayRole()
{
    cout << "Role: Student" << endl;
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getMemberID() << endl;
    cout << "CGPA: " << cgpa << endl;
}