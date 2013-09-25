#include "Adventurer.h"

class MasterWizard : public Adventurer
{
    public:
        MasterWizard(string& name);
    protected:
        int mMaxNP;
        int mCurrentNP;
    public:
        virtual void setMaxNP(int maxNP);
        virtual void setCurrentNP(int currentNP);
    public:
        void makeDecision();
        void reset();
        void takeDrug();
    protected:
        void deading();
};
