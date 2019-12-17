#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

class Aquecedor {

    private:
    	double _temperatura;

    public:
      	Aquecedor();
      	double aquecer();
      	double resfriar();
      	double get_temperatura();
      
};

#endif
