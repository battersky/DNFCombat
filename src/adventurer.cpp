#include <iostream>
#include "adventurer.h"
using namespace std;

Adventurer::Adventurer(string name, int maxHP = 100, int currentHP = 100, int maxSP = 100,
            int currentSP = 100, int damage = 20, int exp = 0, int level = 1, 
            int dragNum = 5)
{
    mMaxHP = maxHP;
    mCurrentHP = currentHP;
    mMaxSP = maxSP;
    mCurrentSP = currentSP;
    mDamage = damage;
    mExp = exp;
    mLevel = level;
    mName = name;
    mDragNum = dragNum;
}

void Adventurer::attack(Adventurer* adventurer)
{
    adventurer->injured(mDamage);
}

void Adventurer::injured(int HP)
{
    if (mCurrentHP - HP <= 0)
    {
        deading();
    } else {
        mCurrentHP -= HP;
    }
}

void Adventurer::dump()
{
    cout<<"name: "<<mName<<endl;
    cout<<"max HP: "<<mMaxHP<<endl;
    cout<<"current HP: "<<mCurrentHP<<endl;
    cout<<"max SP: "<<mMaxSP<<endl;
    cout<<"current SP: "<<mCurrentSP<<endl;
    cout<<"demage per hit: "<<mDamage<<endl;
    cout<<"exp: "<<mExp<<endl;
    cout<<"level: "<<mLevel<<endl;
    cout<<"drugs number: "<<mDragNum<<endl;
}

