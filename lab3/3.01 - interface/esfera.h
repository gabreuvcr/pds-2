#ifndef PDS2_ESFERA
#define PDS2_ESFERA
#include "forma3d.h"
#include <string>

class Esfera : public Forma3D {

	private:
		std::string _nome;
		std::string _cor;
		double _raio;

	public:
		Esfera(std::string cor, double raio);
		virtual std::string get_cor() override;
		virtual std::string get_nome() override;
		virtual double get_volume() override;

};

#endif
