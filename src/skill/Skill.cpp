#include "skill/Skill.h"

Skill::Skill(const std::string& name, const std::string& description, int level) : mName(name), mDescription(description)
{
    mLevel = level;
    init(mLevel);
}

void Skill::setName(const std::string& name)
{
    mName = name;
}

void Skill::setDescription(const std::string& description)
{
    mDescription = description;
}

void Skill::setLevel(int level)
{
    mLevel = level;
}

const std::string& Skill::getName()
{
    return mName;
}

const std::string& Skill::getDescription()
{
    return mDescription;
}

const std::string& Skill::getLevel()
{
    return mLevel;
}

