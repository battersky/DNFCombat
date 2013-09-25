#include "Adventurer.h"

class MasterWizard : public Adventurer
{
    public:
        MasterWizard(string& name);
    protected:
        int mMaxNP;
        int mCurrentNP;
    public:
        void setMaxNP(int maxNP);
        void setCurrentNP(int currentNP);
    
};
