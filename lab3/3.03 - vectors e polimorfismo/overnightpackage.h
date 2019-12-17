#ifndef PDS2_OVERNIGHTPACKAGE
#define PDS2_OVERNIGHTPACKAGE
#include <string>
#include "package.h"
#include <iostream>

class OverNightPackage : public Package {

    protected:
      	unsigned int _custo_add;

    public:
		OverNightPackage(unsigned int peso, unsigned int custo, unsigned int custo_add,
						std::string nome, std::string endereco);
		virtual double calculate_cost() override;

};

#endif
