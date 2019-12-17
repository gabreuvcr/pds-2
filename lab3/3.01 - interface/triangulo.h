#ifndef PDS2_TRIANGULO
#define PDS2_TRIANGULO
#include "forma2d.h"
#include <string>

class Triangulo : public Forma2D {

    public:
		std::string _nome;
		std::string _cor;
		double _aresta_1;
		double _aresta_2;
		double _aresta_3;

    public:
		Triangulo(std::string cor, double aresta_1, double aresta_2, double aresta_3);
		virtual std::string get_cor() override;
		virtual std::string get_nome() override;
		virtual double get_perimetro() override;
		virtual double get_area() override;
      
};

#endif
