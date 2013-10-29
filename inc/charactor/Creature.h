#ifndef __CREATEURE_H_
#define __CREATEURE_H_
#include <string>
class Creature
{
    protected:
        const std::string& mName;
        int mMaxHP;
        int mCurrentHP;
        bool mMutable;
        int mLevel;

    public:
        Creature(const std::string& name);
    public:
        enum Mode {
            GOD_MODE,
            NORMAL_MODE
        }
        bool inGodMode();
        void setMode(Mode mode);
        virtual void setName(std::string& name);
        virtual void setCurrentHP(int HP);
        virtual void setMaxHP(int maxHP);
        virtual void setLevel(int level);
        //virtual bool hasSkill(); skill should be invoked later
    public:
        virtual int getCurrentHP() const;        
        virtual int getMaxHP() const;
        virtual int getLevel() const;
};

#endif //Creature.h
