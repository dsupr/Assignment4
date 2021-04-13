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
        void gotoPrev();
        void gotoNext();
        void gotoFirst() {current = head;};
        void gotoLast() {current = tail;};
        bool deleteCurrent();

};
