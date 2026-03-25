#include "TeachingAssistant.h"
#include <iostream>
using namespace std;

TeachingAssistant::TeachingAssistant(string name, int memberId, double cgpa, 
                                     double salary, AccessCard card, int workingHours)
    : UniversityMember(name, memberId),
      Student(name, memberId, cgpa),
      Staff(name, memberId, salary, card)
{
    this->workingHours = workingHours;
}

void TeachingAssistant::displayRole()
{
    cout << "Role: Teaching Assistant" << endl;
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getMemberID() << endl;
    cout << "CGPA: " << getCGPA() << endl;
    cout << "Salary: $" << getSalary() << endl;
    cout << "Working Hours: " << workingHours << endl;
}

void TeachingAssistant::gradeAssignment(int score)
{
    cout << "Grading assignment with numeric score: " << score << "/100" << endl;
    if (score >= 90)
        cout << "Grade: A" << endl;
    else if (score >= 80)
        cout << "Grade: B" << endl;
    else if (score >= 70)
        cout << "Grade: C" << endl;
    else if (score >= 60)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;
}

void TeachingAssistant::gradeAssignment(string letterGrade)
{
    cout << "Grading assignment with letter grade: " << letterGrade << endl;
}