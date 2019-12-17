#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H
#include "excecoes.h"

enum Tipo {EQUILATERO = 0, ISOSCELES = 1, ESCALENO = 2};

class Triangulo {
    
    private:
        double _x;
        double _y;
        double _z;
        
    public:
        Triangulo(double x, double y, double z);
        Tipo determinar_tipo();
        
};

#endif
