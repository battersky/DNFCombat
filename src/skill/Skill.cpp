#include "skill/Skill.h"

Skill::Skill(const std::string& name, const std::string& description, int level) 
    : mName(name), mDescription(description)
{
    mLevel = level;
    init();
}

void Skill::setLevel(int level)
{
    mLevel = level;
}

const std::string& Skill::getName() const
{
    return mName;
}

const std::string& Skill::getDescription() const
{
    return mDescription;
}

int Skill::getLevel() const
{
    return mLevel;
}

