#include "aquecedor++.h"

Aquecedor::Aquecedor() {
	_temperatura = 20;
	_temperatura_min = 10;
	_temperatura_max = 40;
	_fator_incremento = 5;
}

Aquecedor::Aquecedor(double temperatura) {
	_temperatura = temperatura;
}

Aquecedor::Aquecedor(double temperatura, double fator_incremento) {
	_temperatura = temperatura;
	_fator_incremento = fator_incremento;
}

void Aquecedor::aquecer() {
	if(_temperatura + _fator_incremento > _temperatura_max) {
		std::cout << "Erro: Temperatura fora do limite." << std::endl;
	}
	else {
		_temperatura += _fator_incremento;
	}
}

void Aquecedor::resfriar() {
	if(_temperatura - _fator_incremento < _temperatura_min) {
		std::cout << "Erro: Temperatura fora do limite." << std::endl;
	}
	else {
		_temperatura -= _fator_incremento;
	}
}

void Aquecedor::set_fator_incremento(double x) {
	_fator_incremento = x;
}

double Aquecedor::get_temperatura() {
	return _temperatura;
}
