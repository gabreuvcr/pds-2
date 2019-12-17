#include "overnightpackage.h"
#include <string>

OverNightPackage::OverNightPackage(unsigned int peso, unsigned int custo, unsigned int custo_add, std::string nome,
            std::string endereco):
    Package(peso, custo, nome, endereco), _custo_add(custo_add) {}

double OverNightPackage::calculate_cost() {
    return _peso * (_custo + _custo_add);
}
