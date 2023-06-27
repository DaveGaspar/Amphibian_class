#ifndef TERRESTRIAL_H
#define TERRESTRIAL_H

#include "Animal.h"

class Terrestrial:virtual public Animal{
    protected:
        int hair = 5;
    public:
        Terrestrial();
        Terrestrial(int,int);
        ~Terrestrial();
};

#endif