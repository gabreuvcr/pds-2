#include "cubo.h"
#include <iostream>
#include <string>
#include <math.h>

Cubo::Cubo(std::string cor, double aresta) {
    this->_cor = cor;
    this-> _aresta = aresta;
}

std::string Cubo::get_cor() {
    return this->_cor;
}

std::string Cubo::get_nome() {
    _nome = "cubo";
    return this->_nome;
}

double Cubo::get_volume() {
    return pow(this->_aresta, 3);
}
