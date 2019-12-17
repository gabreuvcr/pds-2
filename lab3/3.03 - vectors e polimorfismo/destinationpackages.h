#ifndef PDS2_DESTINATIONPACKAGE
#define PDS2_DESTINATIONPACKAGE
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "package.h"

class DestinationPackages {

    private:
      	std::map<std::string, std::vector<Package*>> _map;

    public:
		DestinationPackages();
		void add_package(Package*);
		double custo_total();
		double custo_total(std::string string);
      
};

#endif
