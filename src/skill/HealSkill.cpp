#include "skill/HealSkill.h"
#include "charactor/Creature.h"

HealSkill::HealSkill(int level) : Skill(HEALSKILL_NAME, HEALSKILL_NAME, level)
{
}

void HealSkill::init()
{
    mThreshold = 10;    
}

void HealSkill::befall(Creature* creature)
{
    if (creature)
    {
        creature->setCurrentHP(mThreshold * mMaxLevel);
    }
}

