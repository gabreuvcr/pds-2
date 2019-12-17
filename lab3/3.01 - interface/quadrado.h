#ifndef PDS2_QUADRADO
#define PDS2_QUADRADO
#include <string>
#include "forma2d.h"

class Quadrado : public Forma2D {

    private:
		double _aresta;
		std::string _nome;
		std::string _cor;

    public:
      	Quadrado(std::string cor, double aresta);
		virtual std::string get_cor() override;
		virtual std::string get_nome() override;
		virtual double get_perimetro() override;
		virtual double get_area() override;

};

#endif
