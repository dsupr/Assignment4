#pragma once

#include <string>

class DLinkListNode {

public:
    std::string data;
    DLinkListNode *next, *prev;
    
    DLinkListNode(){next = nullptr, prev = nullptr;};
};
