#include "skill/Skill.h"

Skill::Skill(std::string& name, std::string& description, int level)
{
    mName = name;
    mDescription = description;
    mLevel = level;
    init(mLevel);
}

void Skill::setName(std::string& name)
{
    mName = name;
}

void Skill::setDescription(std::string& description)
{
    mDescription = description;
}

void Skill::setLevel(int level)
{
    mLevel = level;
}

std::string& Skill::getName()
{
    return mName;
}

std::string& Skill::getDescription()
{
    return mDescription;
}

std::string& Skill::getLevel()
{
    return mLevel;
}

