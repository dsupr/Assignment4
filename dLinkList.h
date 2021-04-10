#include "DLinkListNode.h"
#pragma once 
#include <string>

class DLinkList {

    private:
        DLinkListNode *head, *tail, *current;

    public:
        DLinkList() {head = nullptr; tail = nullptr; current = nullptr;};
        void insertString(std::string d);
        bool getCurrent(std::string &d);
        /*
        void gotoLast();
        void gotoNext();
        void gotoPrev();
        
        bool deleteCurrent();
        */
};
