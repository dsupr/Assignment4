#include <iostream>

#include "DLinkList.h"
#include "DLinkListNode.h"

#include "DLinkListNode.cpp"

#include <string>

//using namespace std; 

int main() {

    DLinkList list;
    std::string entry;
    std::string stringReturn = "";

    std::cout << "Enter a word to the doubly linked list: " << std::endl;
    std::cin >> entry;

    list.insertString(entry);
    std::string sampleString;
    sampleString = "this is the second string entered into list";
    list.insertString(sampleString);

    list.getCurrent(stringReturn);
    std::cout << "before go to prev: " << stringReturn << std::endl;
    list.gotoPrev();
    list.getCurrent(stringReturn);
    std::cout << "after go to prev: " << stringReturn << std::endl;

    list.gotoNext();
    list.getCurrent(stringReturn);
    std::cout << "after go to next: " << stringReturn << std::endl;

    if (list.deleteCurrent()) 
    {
        std::cout << "Twas true" << std::endl;
    }
    else
    {
        std::cout << "twas false" << std::endl;
    }
    
    list.getCurrent(stringReturn);
    std::cout << "after delete: " << stringReturn << std::endl;
    list.insertString(sampleString);
    list.gotoLast();
    list.getCurrent(stringReturn); 
    std::cout << "After insert and go to last: " << stringReturn << std::endl;

    std::string sampleString2 = "3rd entry of string";
    list.insertString(sampleString2);
    list.gotoLast();
    list.getCurrent(stringReturn);
    std::cout << "After insert again and go to last again: " << stringReturn << std::endl;
    
    list.gotoPrev();
    list.getCurrent(stringReturn);
    std::cout << "after go to prev: " << stringReturn << std::endl;
    
    list.gotoLast();
    list.getCurrent(stringReturn); 
    std::cout << "After go to last: " << stringReturn << std::endl;


    list.gotoFirst();
    list.getCurrent(stringReturn);
    std::cout << "after go to first: " <<stringReturn << std::endl;
    


    return 0;
}
