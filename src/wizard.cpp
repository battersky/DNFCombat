#include "wizard.h"

Wizard::Wizard(String& name) : Adventurer(name)
{
    setMaxMP(100);
    setCurrentMP(100);
}

void Wizard::setMaxMP(int maxMP)
{
    mMaxMp = maxMP; 
}

void Wizard::setCurrentMP(int currentMP)
{
    mCurrentMP = currentMP;
}
