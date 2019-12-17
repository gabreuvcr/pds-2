#include "twodaypackage.h"
#include <string>

TwoDayPackage::TwoDayPackage(unsigned int peso, unsigned int custo, unsigned int taxa, std::string nome,
            std::string endereco):
    Package(peso, custo, nome, endereco), _taxa(taxa) {}

double TwoDayPackage::calculate_cost() {
    return (_peso * _custo) + this->_taxa;
}
