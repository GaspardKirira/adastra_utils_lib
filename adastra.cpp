// adastra.cpp
#include "adastra.hpp"
#include <iostream>

namespace Adastra
{
    void hello(const std::string &name)
    {
        std::cout << "hello, " << name << std::endl;
    }

    int sum(int a, int b)
    {
        return a + b;
    }

}
