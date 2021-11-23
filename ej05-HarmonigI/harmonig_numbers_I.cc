/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonig_numbers_I.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa devuelve Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
 
#include <iostream>
#include <iomanip>

double CalcularHarmonig(int numero_usuario) {
  double harmonig_number{0}, division_n;
  for(double divisor = 1; divisor <= numero_usuario; divisor++) {
    division_n = (1 / divisor);
    harmonig_number += division_n;
  }
  return harmonig_number;
}

int main() {
  int numero_usuario;
  std::cin >> numero_usuario;
  std::cout << std::fixed << std::setprecision(4) << CalcularHarmonig(numero_usuario) << std::endl;
  return 0;
}