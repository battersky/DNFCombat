#ifndef _SKILL_H_
#define _SKILL_H_
#include <string>

class Creature;

class Skill
{
    public:
        Skill(const std::string& name, const std::string& description, int level);
        
        virtual void setLevel(int level);

        const std::string& getName() const;
        const std::string& getDescription() const;
        int getLevel() const;

    protected:
        virtual void init() = 0;
    public:
        virtual void befall(Creature* creatures[], int size) = 0;
    protected:
        const std::string& mName;
        const std::string& mDescription;
        int mLevel;
};

#endif
