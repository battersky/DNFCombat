#ifndef _SKILL_H_
#define _SKILL_H_
#include <string>

class Creature;

class Skill
{
    public:
        Skill(string& name, string &description, int level);

        virtual void setName(string& name);
        virtual void setDescription(string& description);
        virtual void setLevel(int level);

        string& getName() const;
        string& getDescription() const;
        int getLevel() const;

    private:
        virtual void init(int level) = 0;
    public:
        virtual void befall(Creature* creature) = 0;
    protected:
        string& mName;
        string& mDescription;
        int mLevel;
};

#endif
