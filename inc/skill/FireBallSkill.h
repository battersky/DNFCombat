#ifndef _H_FIREBALL_H_
#define _H_FIREBALL_H_

#include "Skill.h"

class FireBallSkill : public Skill
{
    public:
        FireBallSkill(int level);
    protected:
        void init();    
    public:
        void befall(Creature* creature);
};

#endif
