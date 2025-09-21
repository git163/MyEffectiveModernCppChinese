#include<iostream>
#include "demo01.h"

int main() {
    People people;
    const People &ptr = people;
    func(ptr);
    std::cout << "==hello world==" << std::endl;
}