#ifndef PDS2_FORMA_3D
#define PDS2_FORMA_3D
#include <string>
#include "forma.h"

class Forma3D : public Forma {

    public:
		virtual double get_volume() = 0;

};

#endif
