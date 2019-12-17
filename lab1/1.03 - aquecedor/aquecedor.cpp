#include "aquecedor.h"

Aquecedor::Aquecedor() {
    _temperatura = 20;
}

double Aquecedor::aquecer() {
    _temperatura += 5;
    return _temperatura;
}

double Aquecedor::resfriar() {
    _temperatura -= 5;
    return _temperatura;
}
    
double Aquecedor::get_temperatura() {
    return _temperatura;
}
