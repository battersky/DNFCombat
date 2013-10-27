#ifndef __CREATEURE_H_
#define __CREATEURE_H_
#include <string>
class Creature
{
	protected:
        std::string& mName;
        int mMaxHP;
        int mCurrentHP;
		bool mMutable;
        int mLevel;

	public:
		Creature(std::string& name);
		virtual void setMutable(bool isMutable);
        bool isMutable();
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
