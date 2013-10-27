PROJECT(NDFCore)
INCLUDE_DIRECTORIES(inc)
SET(SKILL_SRC src/skill/HealSkill.cpp src/skill/Skill.cpp)
SET(CHARACTOR_SRC src/charactor/Adventurer.cpp src/charactor/Wizard.cpp) 
SET(LIB_SRC ${SKILL_SRC} ${CHARACTOR_SRC}) 

ADD_LIBRARY(NDFcore SHARED ${LIB_SRC})
