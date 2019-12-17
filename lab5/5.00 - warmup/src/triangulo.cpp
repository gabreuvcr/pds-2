#include "triangulo.h"

Triangulo::Triangulo(double x, double y, double z) {
    if((x < 0) || (y < 0) || (z < 0)) {
        throw TrianguloInvalidoException();
    }
    if((x == 0) || (y == 0) || (z == 0)) {
        throw TrianguloInvalidoException();
    }
    if(((x + y) < z) || ((x + z) < y) || ((z + y) < x)) {
        throw TrianguloInvalidoException();
    }
    _x = x;
    _y = y;
    _z = z;

    /* casos especiais errados:
    1- lados negativo x < 0
    2- lado zero x = 0 
    3- definicao triangulo (x + y) < z */

}

Tipo Triangulo::determinar_tipo() {
    if((_x == _y) && (_y == _z)) {
        return EQUILATERO;
    } 
    else if(_x == _y || _y == _z || _x == _z) {
        return ISOSCELES;
    } 
    else {
        return ESCALENO;
    }     
}
