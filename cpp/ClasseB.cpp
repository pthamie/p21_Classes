#include "ClasseB.h"
#include <iostream>

ClasseB::ClasseB()
{

}

ClasseB::~ClasseB()
{

}

int ClasseB::print()
{
    std::cout << "ClasseB" << std::endl;

    return 2;
}

int ClasseB::vprint()
{
    std::cout << "ClasseB" << std::endl;

    return 22;
}
