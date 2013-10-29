#include "skill/MassHealSkill.h"

void MassHealSkill::init()
{
    IntermediateHealSkill::init();
    mThreshold *= 2;
}
