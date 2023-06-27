#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    protected:
        int dna = 5;
    public:
        Animal();
        Animal(int);
        ~Animal();
};

#endif