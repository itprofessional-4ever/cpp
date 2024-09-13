#include <iostream>

int main()
{
    /*
    pointers = variable that stores a memory address of another variable
                sometimes it's easier to work with an address

                & address-of operator
                * dereference operator
    */

    std::string name = "Chloe";
    int age = 21;
    std::string freePizzas[5] = {"piazza1", "piazza2", "piazza3", "piazza4", "piazza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << pFreePizzas << '\n';
    return 0;
}