#include "adventurer.h"

Adventurer::Adventurer(int maxHP = 100, int currentHP = 100, int maxSP = 100, 
            int currentSP = 100, int damage = 20, int exp = 0, int level = 1, 
            int dragNum = 5, string name)
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

