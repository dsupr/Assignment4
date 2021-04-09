#include <iostream>

#include "DLinkList.h"
#include "DLinkListNode.h"

#include "DLinkListNode.cpp"

#include <string>

//using namespace std; 

int main() {

    DLinkList list;
    
    std::string entry;

    std::cout << "Enter za word to za doubly linked list: " << std::endl;
    std::cin >> entry;

    list.insertString(entry);

    std::cout << "hello big bruddah" << std::endl;


    return 0;
}