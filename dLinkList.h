

#include "DLinkListNode.h"
#pragma once 
#include <string>

class DLinkList {

    private:
        DLinkListNode *first, *last, *current;

    public:
        DLinkList() {first = nullptr;};
        void insertString(std::string a);

        /*
        void gotoFirst();
        void gotoLast();
        void gotoNext();
        void gotoPrev();
        bool getCurrent(string);
        bool deleteCurrent();
        */
};