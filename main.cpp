#include <iostream>

#include "DLinkList.h"
#include "DLinkListNode.h"

#include "DLinkListNode.cpp"

#include <string>

//using namespace std; 

int main() {

    DLinkList list;
    std::string entry;
    std::string rebruh = "";

    std::cout << "Enter za word to za doubly linked list: " << std::endl;
    std::cin >> entry;

    list.insertString(entry);
    std::string dio;
    dio = "BUT IT WAS I DIO";
    list.insertString(dio);

    std::cout << "before wait actually: " << dio << std::endl;
    if (list.getCurrent(rebruh))
    {
        std::cout << "get was true" << std::endl;
    }
    else 
    {
        std::cout << "get was false" << std::endl;
    }

    std::cout << "wait actually: " << rebruh << std::endl;

    std::cout << "hello big bruddah" << std::endl;


    return 0;
}