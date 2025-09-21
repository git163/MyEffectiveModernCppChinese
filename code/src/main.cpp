#include<iostream>
#include "demo01.h"

int main() {
    People people;
    const People * ptr = &people;
    funcint(ptr);
    std::cout << "==hello world==" << std::endl;
}