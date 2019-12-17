#ifndef PDS2_CIRCULO
#define PDS2_CIRCULO
#include "forma2d.h"
#include <string>

class Circulo : public Forma2D {

	private:
	  	std::string _nome;
	  	std::string _cor;
	  	double _raio;

	public:
	  	Circulo(std::string cor, double raio);
	  	virtual std::string get_cor() override;
	  	virtual std::string get_nome() override;
	  	virtual double get_perimetro() override;
	  	virtual double get_area() override;

};

#endif
