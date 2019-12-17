#include "esfera.h"
#include <string>
#include <iostream>
#include <math.h>

Esfera::Esfera(std::string cor, double raio) {
    this->_cor = cor;
    this->_raio = raio;
}

std::string Esfera::get_cor() {
    return this->_cor;
}

std::string Esfera::get_nome() {
    _nome = "esfera";
    return this->_nome;
}

double Esfera::get_volume() {
    return (4 * 3.14 * (pow(this->_raio, 3))) / 3;
}
