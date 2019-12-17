#ifndef PDS2_PACKAGE
#define PDS2_PACKAGE
#include <string>
#include <iostream>

class Package {

    protected:
		unsigned int _peso;
		unsigned int _custo;
		std::string _nome;
		std::string _endereco;

    public:
		Package(unsigned int peso, unsigned int custo, std::string nome, std::string endereco);
		Package();
		virtual std::string get_nome();
		virtual double calculate_cost();
		virtual unsigned int get_peso();
		virtual unsigned int get_custo_por_quilo();
		virtual ~Package();

};

#endif
