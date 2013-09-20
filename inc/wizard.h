#include "adventurer.h"

class Wizard : public Adventurer
{
    public:
        Wizard(String& name); 
    public:
        void setMaxMP(int maxMP);
        void setCurrentMP(int currentMP);
    protected:
        int mMaxMP;
        int mCurrentMP;
};
