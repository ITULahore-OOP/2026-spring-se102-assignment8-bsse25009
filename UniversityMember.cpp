#include "UniversityMember.h"
using namespace std;

UniversityMember::UniversityMember(string name, int memberId)
{
    this->name = name;
    this->memberId = memberId;
}

UniversityMember::~UniversityMember()
{
    
}

string UniversityMember::getName()
{
    return name;
}

int UniversityMember::getMemberID()
{
    return memberId;
}