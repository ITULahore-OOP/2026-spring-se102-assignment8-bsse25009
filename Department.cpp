#include "Department.h"
#include <iostream>
using namespace std;

Department::Department(string departmentName)
{
    this->departmentName = departmentName;
    memberCount = 0;
    // Initialize all pointers to nullptr
    for (int i = 0; i < 50; i++)
    {
        members[i] = nullptr;
    }
}

void Department::addMember(UniversityMember* member)
{
    if (memberCount < 50)
    {
        members[memberCount] = member;
        memberCount++;
        cout << "Added " << member->getName() << " to " << departmentName << " department." << endl;
    }
    else
    {
        cout << "Department is full! Cannot add more members." << endl;
    }
}

void Department::displayAllRoles()
{
    cout << "=== " << departmentName << " Department Members ===" << endl;
    for (int i = 0; i < memberCount; i++)
    {
        cout << endl;
        members[i]->displayRole();
        cout << "------------------------" << endl;
    }
}