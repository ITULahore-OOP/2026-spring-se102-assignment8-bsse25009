#ifndef TUTORING_SESSION_H
#define TUTORING_SESSION_H
#include <iostream>
#include "TeachingAssistant.h"
#include "Student.h"
using namespace std;

class TutoringSession
{
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;
public:
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
    double getDuration();
    void displaySession();
    TutoringSession operator+(const TutoringSession& other);
    
    // Friend function to access private members
    friend bool operator>(const TutoringSession& s1, const TutoringSession& s2);
};

// Non-member operator overloading
bool operator>(const TutoringSession& s1, const TutoringSession& s2);

#endif
