#include "fleet.h"
#include <string>
#include <vector>
#include <iostream>

int main() {

    int number_of_planes = 8;

	Fleet *fleet = new Fleet();
	std::vector<Aeroplane*> plane_fleet = fleet->instantiate_fleet(number_of_planes);
	fleet->print_fleet_data(plane_fleet);

	for(unsigned int i=0; i < plane_fleet.size(); i++){
	    delete plane_fleet[i];
	}

	delete fleet;
}
