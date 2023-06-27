#include "Terrestrial.h"

Terrestrial::Terrestrial(){
    std::cout << "Call default constructor Terrestrial" << std::endl;
}
Terrestrial::Terrestrial(int d, int h):Animal(d), hair(h){
    std::cout << "Call parametrized constructor Terrestrial" << std::endl;
}
Terrestrial::~Terrestrial(){
    std::cout << "Destructor Terrestrial" << std::endl;
}