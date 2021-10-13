#include<iostream>
#include "test1.h"
int main()
{
    size_t flag = 101;
    std::cout << "101、static_cast test" << std::endl;
    std::cin >> flag;
    switch (flag)
    {
    case 101:
        glx0101::main();
        break;
    case 102:
        glx0102::main();
        break;
    default:
        break;
    }
    
}