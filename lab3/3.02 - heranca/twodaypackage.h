#ifndef PDS2_TWODAYPACKAGE
#define PDS2_TWODAYPACKAGE
#include "package.h"
#include <string>
#include <iostream>

class TwoDayPackage : public Package {

    private:
      	unsigned int _taxa;

    public:
		TwoDayPackage(unsigned int peso, unsigned int custo, unsigned int taxa, std::string nome,
				std::string endereco);
		double calculate_cost() override;

};

#endif
