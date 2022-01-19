#include "ClasseA.h"
#include <iostream>

ClasseA::ClasseA()
{

}

ClasseA::~ClasseA()
{

}

int ClasseA::print()
{
    std::cout << "ClasseA" << std::endl;

    return 1;
}

int ClasseA::vprint()
{
    std::cout << "ClasseA" << std::endl;

    return 11;
}
