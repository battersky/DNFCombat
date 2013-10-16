#ifndef _ITEM_H_
#define _ITEM_H_

#include "ItemType.h"

class Item
{
    protected:
        string& mName;
        string& mDescription;
        ItemType mType; 
    public:
        Item(string& name, string& description, ItemType type);
        virtual void setItemName(string& name);
        virtual void setItemDescription(string& description);
        virtual void setItemType(ItemType type);
        virtual string& getItemName();
        virtual string& getItemDescription();
        virtual ItemType getItemType();
};


#endif
