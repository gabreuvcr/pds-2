#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H
#include <iostream>

class Aquecedor {

    private:
		double _temperatura;
		double _temperatura_min;
		double _temperatura_max;
		double _fator_incremento;

    public:
		Aquecedor();
		Aquecedor(double temperatura);
		Aquecedor(double temperatura, double fator_incremento);
		void aquecer();
		void resfriar();
		void set_fator_incremento(double x);
		double get_temperatura();
      
};

#endif
