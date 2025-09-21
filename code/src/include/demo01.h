#include <iostream>
#include<functional>
class People
{
public:    
    People()
    {
        std::cout << "People construct" << std::endl;
    }
    ~People()
    {
        std::cout << "People deconstruct" << std::endl;
    }
    People(const People& other)
    {
        std::cout << "People copy" << std::endl;
    }
    People(const People&& other)
    {
        std::cout << "People move" << std::endl;
    }
    void Print() const
    {
        std::cout << "Const Print" << std::endl;
    }
    // void Print() 
    // {
    //     std::cout << "Print" << std::endl;
    // }
};

template <class T>
void func(T &&v)
{
    std::cout << "func" << std::endl;
}

template <class T>
void funcint(T v)
{
    std::invoke(&People::Print, v);
}