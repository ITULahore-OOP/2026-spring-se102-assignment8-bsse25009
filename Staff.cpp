#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff(string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID), card(card)
{
    this->salary = salary;
}

double Staff::getSalary()
{
    return salary;
}

void Staff::displayRole()
{
    cout << "Role: Staff" << endl;
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getMemberID() << endl;
    cout << "Salary: $" << salary << endl;
}

void Staff::displayCard()
{
    card.displayCardInfo();
}