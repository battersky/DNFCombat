#include "Creature.h"
class Monster : public Creature 
{
    public:
        Monster(string& name);    

    public:
        virtual void attack(Creature& creature);


};
