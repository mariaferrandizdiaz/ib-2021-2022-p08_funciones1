/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file reverse.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 25 2021
  * @brief Este programa escribe los numeros que introduzca en orden inverso.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
#include <string>
#include <vector>

int main() {
  int cantidad_de_numeros{0};
  int inicio[500], final[500], count
  int i{0};
  std::string numeros_usuario;
  std::cin >> cantidad_de_numeros;
  while (std::cin >> numeros_usuario) {
    std::cin.ignore();
    int i = numeros_usuario.length();
    std::cin >> count;
    for(i = 0; i < numeros_usuario; i++) {
      std::cin >> inicio[i];
    }
    for(i = 0; i < numeros_usuario; i++) {
      final[i] = inicio[count - i - 1];
    }  
    for(i = 0; i < numeros_usuario; i++) {
      std::cout << final[i] << " ";
    }
    return 0;
  }


  
  
}
 