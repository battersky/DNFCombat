#include "skill/HealSkill.h"
#include "charactor/Creature.h"

//Todo: HEALSKILL_NAME and HEALSKILL_NAME should be get from resource manager
HealSkill::HealSkill(int level) : Skill(HEALSKILL_NAME, HEALSKILL_NAME, level)
{
}

void HealSkill::init()
{
    //Todo: mThreshold should hold the value from resource manager
    mThreshold = 10;
}

void HealSkill::befall(Creature* creatures[], int size)
{
    for(int i = 0; i < size; i ++)
    {
        Creature* creature = creatures[i];
        creature->setCurrentHP(mThreshold * mLevel);
    }
}

