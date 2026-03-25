#include "AccessCard.h"
#include <iostream>
using namespace std;

AccessCard::AccessCard(string cardId, int accessLevel)
{
    this->cardId = cardId;
    this->accessLevel = accessLevel;
}

string AccessCard::getCardID()  
{
    return cardId;
}

int AccessCard::getAccessLevel()
{
    return accessLevel;
}

void AccessCard::displayCardInfo()
{
    cout << "Card ID: " << cardId << ", Access Level: " << accessLevel << endl;
}