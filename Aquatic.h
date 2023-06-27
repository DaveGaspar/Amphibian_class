#ifndef AQUATIC_H
#define AQUATIC_H

#include "Animal.h"

class Aquatic:virtual public Animal{
    protected:
        int gil = 5;
    public:
        Aquatic();
        Aquatic(int,int);
        ~Aquatic();
};

#endif