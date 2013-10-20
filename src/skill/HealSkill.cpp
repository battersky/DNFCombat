#include "skill/HealSkill.h"
#include "charactor/Creature.h"

HealSkill::HealSkill(int level) : Skill("Heal", "Heal self or firendly creature", 0)
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

