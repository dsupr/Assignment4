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
}

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
}
void DLinkList::gotoPrev()
{

    if (current != nullptr)
    {
        current = current->prev;
    }
}

void DLinkList::gotoNext()
{

    if (current != nullptr)
    {
        current = current->next;
    }
}

bool DLinkList::deleteCurrent()
{

    DLinkListNode *sucNode = new DLinkListNode();
    DLinkListNode *predNode = new DLinkListNode();

    sucNode = current->next;
    predNode =  current->prev;

    if (sucNode != nullptr)
    {
        sucNode->prev = predNode;
    }

    if (predNode != nullptr)
    {
        predNode->next = sucNode;
    }

    if (current == head)   // Removed head
    { 
        head = sucNode;
        current = head;
        return true;
    }

    if (current == tail)   // Removed tail
    { 
        tail = predNode;
        current = tail;
        return true; 
    }

    else 
    {
        return false;
    }
}
/*
void gotoFirst();
void gotoLast();



*/