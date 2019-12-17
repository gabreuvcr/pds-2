#include "package.h"
#include <string>

Package::Package(unsigned int peso, unsigned int custo, std::string nome,
            std::string endereco):
    _peso(peso), _custo(custo), _nome(nome), _endereco(endereco) {}

Package::Package() {

}

double Package::calculate_cost() {
    return this->_peso * this->_custo;
}


unsigned int Package::get_peso() {
    return _peso;
}

unsigned int Package::get_custo_por_quilo() {
    return _custo;
}

std::string Package::get_nome() {
    return _nome;
}

Package::~Package() {

}
