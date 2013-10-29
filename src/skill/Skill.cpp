#include "skill/Skill.h"

Skill::Skill(const std::string& name, const std::string& description, int level) : mName(name), mDescription(description)
{
    mLevel = level;
    init();
}

/*void Skill::setName(const std::string& name)
{
    mName = name;
}

void Skill::setDescription(const std::string& description)
{
    mDescription = description;
}*/

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

