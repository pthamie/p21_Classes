#include <iostream>
#include <ClasseB.h>


int main(int, char**) 
{
    std::cout << "Classes starting...\n";

    ClasseA a;
    a.print();
    a.vprint();

    ClasseB b;
    b.print();
    b.vprint();

    ClasseA &refTypeA = b;

    refTypeA.print();
    refTypeA.vprint();





}
