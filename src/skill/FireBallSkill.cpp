#include "skill/FireBallSkill.h"
#include "charactor/Creature.h"

FireBallSkill::FireBallSkill(int level) : Skill("fire ball", "fireball", level)
{
}

void FireBallSkill::init()
{
    mThreshold = 11;
}

void befall(Creature* creatures[], int size)
{
    for(int i = 0; i < size; i ++)
    {
        Creature* creature = creatures[i];
        creature->setCurrentHP(mThreshold * level);
    }
}
