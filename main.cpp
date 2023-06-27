#include "Amphibian.h"

int main(){
    Amphibian* ptr = new Amphibian(7,7,7,7);

    std::cout << std::endl;

    delete ptr;
    return 0;
}