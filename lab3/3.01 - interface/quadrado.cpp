#include <string>
#include <iostream>
#include <string>
#include "quadrado.h"

Quadrado::Quadrado(std::string cor, double aresta) {
    this->_cor = cor;
    this->_aresta = aresta;
}

std::string Quadrado::get_cor() {
    return this->_cor;
}

std::string Quadrado::get_nome() {
    _nome = "quadrado";
    return this->_nome;
}

double Quadrado::get_perimetro() {
    return 4 * this->_aresta;
}

double Quadrado::get_area() {
    return this->_aresta * this->_aresta;
}
