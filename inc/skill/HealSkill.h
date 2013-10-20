#ifndef _HEAL_H_
#define _HEAL_H_

#include "Skill.h"

class HealSkill : public Skill
{
    public:
        HealSkill(int level);
    protected:
        int mMaxLevel;
        int mThreshold;
};

#endif //Heal.h
