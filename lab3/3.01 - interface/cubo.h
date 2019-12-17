#ifndef PDS2_CUBO
#define PDS2_CUBO
#include "forma3d.h"
#include <string>

class Cubo : public Forma3D {

	private:
		std::string _nome;
		std::string _cor;
		double _aresta;

	public:
		Cubo(std::string cor, double aresta);
		virtual std::string get_cor() override;
		virtual std::string get_nome() override;
		virtual double get_volume() override;

};

#endif
