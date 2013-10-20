#ifndef _INTERMEDIATE_HEAL_SKILL_H_
#define _INTERMEDIATE_HEAL_SKILL_H_
#include "HealSkill.h"

class IntermediateHealSkill : public HealSkill
{
    void init()
    {
        mThreshold = 15;
    }
};

#endif
