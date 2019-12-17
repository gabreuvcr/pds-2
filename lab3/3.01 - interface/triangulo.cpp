#include "triangulo.h"
#include <string>
#include <iostream>
#include <math.h>

Triangulo::Triangulo(std::string cor, double aresta_1, double aresta_2, double aresta_3) {
    this->_cor = cor;
    this->_aresta_1 = aresta_1;
    this->_aresta_2 = aresta_2;
    this->_aresta_3 = aresta_3;
}

std::string Triangulo::get_cor() {
    return this->_cor;
}

std::string Triangulo::get_nome() {
    _nome = "triangulo";
    return this->_nome;
}

double Triangulo::get_perimetro() {
    return this->_aresta_1 + this->_aresta_2 + this->_aresta_3;
}

double Triangulo::get_area() {
    double s = (this->_aresta_1 + this->_aresta_2 + this->_aresta_3) / 2;
    return sqrt(s * (s - this->_aresta_1) * (s - this->_aresta_2) * (s - this->_aresta_3));
}
