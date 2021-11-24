/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file primality.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa indica si el numero introducido es primo o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
 
#include <iostream>


bool esPrimo(int numero_usuario) {
  if (numero_usuario == 0 || numero_usuario == 1 || numero_usuario == 4) {
    return false;
  }
  for (int x = 2; x < numero_usuario / 2; x++) {
    if (numero_usuario % x == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int cantidad_numeros, numero_usuario;
  std::cin >> cantidad_numeros;
  while(std::cin >> numero_usuario) {
    bool resultado = esPrimo(numero_usuario);
    if (resultado == true) {
      std::cout << numero_usuario << " is prime" << std::endl;
    } else {
      std::cout << numero_usuario << " is not prime" << std::endl;
    }
  }
  return 0;
}