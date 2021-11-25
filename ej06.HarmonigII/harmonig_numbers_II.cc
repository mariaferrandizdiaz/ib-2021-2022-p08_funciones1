/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers_I.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa devuelve Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
 
#include <iostream>
#include <iomanip>

/**
 * @brief funcion encargada de realizar la suma 1/1 + 1/2 + ⋯ + 1/n hasta el primer numero introducido por el usuario.
 * @param numero_usuario_1 primer numero introducido por el usuario.
 */

double CalcularHarmonicPrimerNumero(const int numero_usuario_1) {
  double harmonic_number_1{0}, division_n;
  for(double divisor = 1; divisor <= numero_usuario_1; divisor++) {
    division_n = (1 / divisor);
    harmonic_number_1 += division_n;
  }
  return harmonic_number_1;
}

/**
 * @brief funcion encargada de realizar la suma 1/1 + 1/2 + ⋯ + 1/n hasta el segundo numero introducido por el usuario.
 * @param numero_usuario_2 segundo numero introducido por el usuario.
 */

double CalcularHarmonicSegundoNumero(const int numero_usuario_2) {
  double harmonic_number_2{0}, division_n;
  for(double divisor = 1; divisor <= numero_usuario_2; divisor++) {
    division_n = (1 / divisor);
    harmonic_number_2 += division_n;
  }
  return harmonic_number_2;
}

int main() {
  int primer_numero, segundo_numero;
  while (std::cin >> primer_numero >> segundo_numero) {
    long double harmonic_primer_numero = CalcularHarmonicPrimerNumero(primer_numero);
    long double harmonic_segundo_numero = CalcularHarmonicSegundoNumero(segundo_numero);
    long double resultado_resta = harmonic_primer_numero - harmonic_segundo_numero;
    std::cout << std::fixed << std::setprecision(10) << resultado_resta << std::endl;
  } 
  return 0;
}