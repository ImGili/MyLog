#pragma once
#include<iostream>
namespace glx0101
{
    class A
    {
    public:
        virtual void print()
        {
            std::cout << "print()" << std::endl;
        }
        int a;
    };
    class B : public A
    {
    public:
        int b;
    };

    int main()
    {
        A a;
        B b;
        
        A* p1 = &a;
        B* p2 = static_cast<B*>(p1);
        p2->b = 111;
        return 0;
    }
}

namespace glx0102
{
    class A
    {
    public:
        virtual void print()
        {
            std::cout << "print()" << std::endl;
        }
    };
    class B : public A
    {
    public:
        int b;
    };

    int main()
    {
        A a;
        B b;
        
        A* p1 = &a;
        B* p2 = dynamic_cast<B*>(p1);
        return 0;
    }
}