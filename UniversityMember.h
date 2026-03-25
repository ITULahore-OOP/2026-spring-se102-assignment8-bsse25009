#ifndef UNIVERSITY_MEMBER_H
#define UNIVERSITY_MEMBER_H

#include <iostream>
#include <string>
using namespace std;

class UniversityMember
{
private:
    string name;
    int memberId;
public:
    UniversityMember(string name, int memberId);
    virtual ~UniversityMember();
    string getName();
    int getMemberID();
    virtual void displayRole() = 0;
};

#endif