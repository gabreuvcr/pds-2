#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <iomanip>

int main() {
  std::string palavra;
  std::string linha;
  std::istringstream stream_string;
  std::map<std::string, int> contador;
  float num_palavras = 0;
  float porcentagem;

    while(std::getline(std::cin, linha)) {
        if(linha == "sair")
            break;
        stream_string = std::istringstream(linha);
        while(std::getline(stream_string, palavra, ' ')) {
            if(contador.count(palavra) == 0) {
                contador[palavra] = 0;
            }
            contador[palavra] = contador[palavra] + 1;
            num_palavras++;
        }
    }

    std::cout << std::endl;
    for(std::pair<std::string, int> pair : contador) {
        porcentagem = pair.second / num_palavras;
        std::cout << pair.first << " " << pair.second << " " << std::setprecision(2) << std::fixed << porcentagem << std::endl;
    }
}
