#include "circulo.h"
#include <string>
#include <iostream>

Circulo::Circulo(std::string cor, double raio) {
    this->_cor = cor;
    this->_raio = raio;
}

std::string Circulo::get_cor() {
    return this->_cor;
}

std::string Circulo::get_nome() {
    _nome = "circulo";
    return this->_nome;
}

double Circulo::get_perimetro() {
    return 2 * 3.14 * this->_raio;
}

double Circulo::get_area() {
    return this->_raio * this->_raio * 3.14;
}
