#include <iostream>

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
};

template <class T>
void func(T &&v)
{
    std::cout << "func" << std::endl;
}