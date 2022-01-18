#include "ClasseA.h"

class ClasseB : public ClasseA
{
public:
    ClasseB();
    ~ClasseB();

public:
    void print();

    virtual void vprint();

};
