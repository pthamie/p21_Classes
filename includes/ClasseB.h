#include "ClasseA.h"

class ClasseB : public ClasseA
{
public:
    ClasseB();
    ~ClasseB();

public:
    int print();

    virtual int vprint();

};
