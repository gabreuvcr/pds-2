#include "data.h"

Data::Data(int dia, int mes, int ano) {
    _dia = dia;
    _mes = mes;
    _ano = ano;
}

int Data::get_dia() {
    return _dia;
}

int Data::get_mes() {
    return _mes;
}

int Data::get_ano() {
    return _ano;
}

std::string Data::get_data_curto() {
    datacurta = std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_ano);
    return datacurta;
}
    
std::string Data::get_data_longo() {
    datalonga = std::to_string(_dia) + " de " + meses[_mes-1] + " de " + std::to_string(_ano);
    return datalonga;
}
