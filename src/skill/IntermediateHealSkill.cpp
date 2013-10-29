#include "skill/IntermediateHealSkill.h"

void IntermediateHealSkill::init()
{
    HealSkill::init();
    mThreshold *= 2;
}
