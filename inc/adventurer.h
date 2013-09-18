#include <string>

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
        //name should be a reference?
        Adventurer(string name, int maxHP = 100, int currentHP = 100, int maxSP = 100,
            int currentSP = 100, int damage = 20, int exp = 0, int level = 1, 
            int dragNum = 5);
            
        virtual void makeDecision() = 0;
        virtual void attack(Adventurer*);
        virtual void rest() = 0;
        virtual void takeDrug() = 0;
        virtual void injured(int HP);
    protected:
        virtual void deading() = 0;

    public:
        virtual void dump();
}
