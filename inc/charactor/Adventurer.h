#ifndef __ADVENTURER_H_
#define __ADVENTURER_H_
#include <string>

class Adventurer : public Creature
{

    protected:
        int mMaxSP;
        int mCurrentSP;
        
        int mDamage;
        int mExp;
        int mDragNum;
        
    public:
        Adventurer(string& name);
            
        virtual void makeDecision() = 0;
        virtual void attack(Adventurer*);
        virtual void rest() = 0;
        virtual void takeDrug() = 0;
        virtual void injured(int HP);
    public:
        virtual void setMaxSP(int maxSP);
        virtual void setCurrentSP(int currentSP);
        virtual void setDamage(int damage);
        virtual void setExp(int exp);
        virtual void setDragNumber(int dragNum);
    protected:
        virtual void deading() = 0;

    public:
        virtual void dump();
};

#endif //Adventurer.h
