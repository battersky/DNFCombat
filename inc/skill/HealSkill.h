#ifndef _HEAL_H_
#define _HEAL_H_

#include <string> 
#include "Skill.h"
static const std::string HEALSKILL_NAME = "HealSkill"; 

class HealSkill : public Skill
{
    public:
        HealSkill(int level);
        void befall(Creature* creatures[], int size);
    protected:
        void init();
    protected:
        int mMaxLevel;
        int mThreshold;
};

#endif //Heal.h
