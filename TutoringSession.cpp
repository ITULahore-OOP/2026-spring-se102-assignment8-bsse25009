#include "TutoringSession.h"
#include <iostream>
using namespace std;

TutoringSession::TutoringSession(int sessionID, double durationMinutes,TeachingAssistant* ta, Student* student)
    : sessionID(sessionID), durationMinutes(durationMinutes), ta(ta), student(student)
{
}

double TutoringSession::getDuration()
{
    return durationMinutes;
}

void TutoringSession::displaySession()
{
    cout << "Session ID: " << sessionID << endl;
    cout << "Duration: " << durationMinutes << " minutes" << endl;
    cout << "Teaching Assistant: " << ta->getName() << endl;
    cout << "Student: " << student->getName() << endl;
}

TutoringSession TutoringSession::operator+(const TutoringSession& other)
{
    return TutoringSession(0, durationMinutes + other.durationMinutes, ta, student);
}

bool operator>(const TutoringSession& s1, const TutoringSession& s2)
{
    return s1.durationMinutes > s2.durationMinutes;
}