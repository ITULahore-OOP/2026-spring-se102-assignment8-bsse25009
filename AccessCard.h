#ifndef ACCESS_CARD_H
#define ACCESS_CARD_H
#include <iostream>
#include <string>
using namespace std;

class AccessCard
{
private:
    string cardId;
    int accessLevel;
public:
    AccessCard(string cardId, int accessLevel);
    string getCardID();  
    int getAccessLevel();
    void displayCardInfo();
};
#endif