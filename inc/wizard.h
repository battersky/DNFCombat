#include "adventurer.h"

class Wizard : public Adventurer
{
    public:
        Wizard(String& name); 
    public:
        void setMaxMP(int maxMP);
        void setCurrentMP(int currentMP);
        void makeDecision();
        void rest();
        void takeDrug();
    protected:
        int mMaxMP;
        int mCurrentMP;
    protected:
        void deading();
};
