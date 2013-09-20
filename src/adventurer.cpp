#include <iostream>
#include "adventurer.h"
using namespace std;

Adventurer::Adventurer(string name)
{
    setName(name);
    setMaxHP(100);
    setCurrentHP(100);
    setMaxSP(100);
    setCurrentSP(100);
    setDamage(20);
    setExp(0);
    setLevel(1);
    setDragNumber(5);
}

void Adventurer::setName(String& name)
{
    mName = name;
}

void Adventurer::setMaxHP(int maxHP)
{
    mMaxHP = maxHP;
}

void Adventurer::setCurrentHP(int currentHP)
{
    mCurrentHP = currentHP;
}

void Adventurer::setMaxSP(int maxSP)
{
    mMaxSP = maxSP;
}

void Adventurer::setCurrentSP(int currentSP)
{
    mCurrentSP = currentSP;
}

void Adventurer::setDamage(int damage)
{
    mDamage = damage;
}

void Adventurer::setExp(int exp)
{
    mExp = exp;
}

void Adventurer::setLevel(int level)
{
    mLevel = level;
}

void Adventurer::setDragNumber(int dragNum)
{
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

