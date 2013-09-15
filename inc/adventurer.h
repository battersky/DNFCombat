#include <iostream>
#include <string>
using namespace std;

class Adventurer {

    protected:
        int mMaxHP;
        int mCurrentHP;
        
        int mMaxSP;
        int mCurrentSP;
        
        int mDamage;
        int mExp;
        int mLevel;
        string mName;
        int mDragNum;
        
    public:
        Adventurer(int maxHP = 100, int currentHP = 100, int maxSP = 100, 
            int currentSP = 100, int damage = 20, int exp = 0, int level = 1, 
            int dragNum = 5, string name);
            
        virtual void makeDecision();
        virtual void attack(Adventurer*);
        virtual void rest();
        virtual void takeDrug();
        virtual void injured(int HP);
}