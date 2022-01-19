#include <iostream>
#include <ClasseB.h>

int main(int argc, char **argv)
{
    if ((argc == 2) && (argv[1] == "-u"))
    {
    }
    else
    {
        std::cout << "Classes starting...\n";

        ClasseA a;
        std::cout << a.print() << std::endl;
        std::cout << a.vprint() << std::endl;

        ClasseB b;
        std::cout << b.print() << std::endl;
        std::cout << b.vprint() << std::endl;

        ClasseA &refTypeA = b;

        std::cout << refTypeA.print() << std::endl;
        std::cout << refTypeA.vprint() << std::endl;
    }
}
