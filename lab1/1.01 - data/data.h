#ifndef PDS2_VPL_DATA_H
#define PDS2_VPL_DATA_H
#include <string>

class Data {

    private:
    	int _dia;
      	int _mes;
      	int _ano;
		int _data_curto;
		int _data_longo;

    public:
		Data(int dia, int mes, int ano);
		std::string meses[12] = {"janeiro", "fevereiro", "marco", "abril", "maio","junho",
								"julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
		std::string datacurta;
		std::string datalonga;
		int get_dia();
		int get_mes();
		int get_ano();
		std::string get_data_curto();
		std::string get_data_longo();
      
};

#endif
