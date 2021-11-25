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

double CalcularHarmonigPrimerNumero(const int numero_usuario_1) {
  double harmonig_number_1{0}, division_n;
  for(double divisor = 1; divisor <= numero_usuario_1; divisor++) {
    division_n = (1 / divisor);
    harmonig_number_1 += division_n;
  }
  return harmonig_number_1;
}

double CalcularHarmonigSegundoNumero(const int numero_usuario_2) {
  double harmonig_number_1{0}, division_n;
  for(double divisor = 1; divisor <= numero_usuario_2; divisor++) {
    division_n = (1 / divisor);
    harmonig_number_1 += division_n;
  }
  return harmonig_number_1;
}

int main() {
  int primer_numero, segundo_numero;
  while (std::cin >> primer_numero >> segundo_numero) {
    double harmonig_primer_numero = CalcularHarmonigPrimerNumero(primer_numero);
    double harmonig_segundo_numero = CalcularHarmonigSegundoNumero(segundo_numero);
    double resultado_resta = harmonig_primer_numero - harmonig_segundo_numero;
    std::cout << std::fixed << std::setprecision(10) << resultado_resta << std::endl;
  } 
  return 0;
}