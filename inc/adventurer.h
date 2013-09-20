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
        Adventurer(string name);
            
        virtual void makeDecision() = 0;
        virtual void attack(Adventurer*);
        virtual void rest() = 0;
        virtual void takeDrug() = 0;
        virtual void injured(int HP);
    public:
        virtual void setName(String& name);
        virtual void setMaxHP(int maxHP);
        virtual void setCurrentHP(int currentHP);
        virtual void setMaxSP(int maxSP);
        virtual void setCurrentSP(int currentSP);
        virtual void setDamage(int damage);
        virtual void setExp(int exp);
        virtual void setLevel(int level);
        virtual void setDragNumber(int dragNum);
    protected:
        virtual void deading() = 0;

    public:
        virtual void dump();
};
