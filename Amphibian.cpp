#include "Amphibian.h"

Amphibian::Amphibian(){
    std::cout << "Call default constructor Amphibian" << std::endl;
}

Amphibian::Amphibian(int d, int h, int g, int b):Animal(d), Terrestrial(d,h), Aquatic(d,g), backbone(b){
    std::cout << "Call parametrized constructor Amphibian" << std::endl;
}

Amphibian::~Amphibian(){
    std::cout << "Destructor Amphibian" << std::endl;
}