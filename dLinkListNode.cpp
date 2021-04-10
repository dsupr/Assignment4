#include "DLinkList.h"

void DLinkList::insertString(std::string d)
{

    DLinkListNode *newNode = new DLinkListNode();
    newNode->data = d;
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        current = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        current = newNode;
    }
};

bool DLinkList::getCurrent(std::string &d)
{
    if (current != nullptr)
    {
        d = current->data;
        return true;
    }
    else
    {
        return false;
    }
};

/*
void gotoFirst();
void gotoLast();
void gotoNext();
void gotoPrev();
bool getCurrent(string);
bool deleteCurrent();
*/