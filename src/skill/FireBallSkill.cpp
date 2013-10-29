#include "skill/FireBallSkill.h"
#include "charactor/Creature.h"

FireBallSkill::FireBallSkill(int level) : Skill("fire ball", "fireball", level)
{
}

void FireBallSkill::init()
{
    mThreshold = 11;
}

void befall(Creature* creature)
{
    if (creature)
    {
        creature->setCurrentHP(mThreshold * level);
    }
}
