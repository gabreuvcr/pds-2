#include "overnightpackage.h"
#include <string>

OverNightPackage::OverNightPackage(unsigned int peso, unsigned int custo, unsigned int custo_add, std::string nome,
            std::string endereco):
    Package(peso, custo, nome, endereco), _custo_add(custo_add) {}

double OverNightPackage::calculate_cost() {
    _custo_add = _custo + _custo_add;
    return _peso * this-> _custo_add;
}
