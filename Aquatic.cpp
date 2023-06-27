#include "Aquatic.h"

Aquatic::Aquatic(){
    std::cout << "Call default constructor Aquatic" << std::endl;
}

Aquatic::Aquatic(int d, int g):Animal(d),gil(g){
    std::cout << "Call parametrized constructor Aquatic" << std::endl;
}

Aquatic::~Aquatic(){
    std::cout << "Destructor Aquatic" << std::endl;
}