#include "skill/Skill.h"
#include "creature/Creature.h"

Skill::Skill(string& name, string& description, int level)
{
    mName = name;
    mDescription = description;
    mLevel = level;
    init(mLevel);
}

void Skill::setName(string& name)
{
    mName = name;
}

void Skill::setDescription(string& description)
{
    mDescription = description;
}

void Skill::setLevel(int level)
{
    mLevel = level;
}

string& Skill::getName()
{
    return mName;
}

string& Skill::getDescription()
{
    return mDescription;
}

string& Skill::getLevel()
{
    return mLevel;
}



