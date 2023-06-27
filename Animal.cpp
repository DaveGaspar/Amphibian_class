#include "Animal.h"

Animal::Animal(){
    std::cout << "Call default constructor Animal" << std::endl;
}

Animal::Animal(int d):dna(d){
    std::cout << "Call parametrized constructor Animal" << std::endl;
}

Animal::~Animal(){
    std::cout << "Destructor Animal" << std::endl;
}