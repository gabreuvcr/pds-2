#include "destinationpackages.h"
#include <map>
#include <vector>
#include <string>
#include <iostream>

DestinationPackages::DestinationPackages() {

}

void DestinationPackages::add_package(Package *g) {
    _map[g->get_nome()].push_back(g);
}

double DestinationPackages::custo_total() {
    double custo_total = 0;
    for(auto package : _map) {
        for(auto value : package.second) {
            custo_total += value->calculate_cost();
        }
    }
    return custo_total;
}

double DestinationPackages::custo_total(std::string string) {
    double custo_usuario = 0;
        for(auto value : _map[string]) {
            custo_usuario += value->calculate_cost();
        }
    return custo_usuario;
}
