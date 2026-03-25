#ifndef TEACHING_ASSISTANT_H
#define TEACHING_ASSISTANT_H

#include <iostream>
#include <string>
#include "Student.h"
#include "Staff.h"
using namespace std;

class TeachingAssistant: public Student, public Staff
{
private:
    int workingHours;
public:
    TeachingAssistant(string name, int memberId, double cgpa, double salary, AccessCard card, int workingHours);
    void displayRole() override;
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
};

#endif