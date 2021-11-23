/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file count_a.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa dice si la frase que introduzca tiene as o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
 
#include <iostream>
#include <string>

int ContarA(std::string frase_usuario) {
  int cantidad_a = 0;
  for (int i = 0; i <= static_cast<int> (frase_usuario.length()); i++) {
    if (frase_usuario[i] == 'a') {
      cantidad_a++;
    }
  }
  return cantidad_a;
}

int main() {
  std::string frase_usuario;
  getline(std::cin, frase_usuario);
  int cantidad_a = ContarA(frase_usuario);
  if (cantidad_a > 0) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}