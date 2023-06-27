#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H

#include "Terrestrial.h"
#include "Aquatic.h"

class Amphibian:virtual public Terrestrial, virtual public Aquatic{
    private:
        int backbone = 5;
    public:
        Amphibian();
        Amphibian(int,int,int,int);
        ~Amphibian();
};

#endif