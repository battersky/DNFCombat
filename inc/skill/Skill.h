#ifndef _SKILL_H_
#define _SKILL_H_
#include <string>

class Creature;

class Skill
{
    public:
        Skill(std::string& name, std::string& description, int level);

        virtual void setName(std::string& name);
        virtual void setDescription(std::string& description);
        virtual void setLevel(int level);

        std::string& getName() const;
        std::string& getDescription() const;
        int getLevel() const;

    protected:
        virtual void init() = 0;
    public:
        virtual void befall(Creature* creature) = 0;
    protected:
        std::string& mName;
        std::string& mDescription;
        int mLevel;
};

#endif
