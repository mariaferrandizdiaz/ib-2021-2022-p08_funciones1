/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors_in_order.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa devuelve las tres palabras introducidas por el usuario pero en orden inverso.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>
#include <cmath>

int CalculadoraDivisores(int numero_usuario) {
  std::cout << "divisors of " << numero_usuario << ":";
  for (int contador = 1; contador < sqrt(numero_usuario); contador++) {
    if (numero_usuario % contador == 0) {
      std::cout << " " << contador;
    }
  }
  for (int contador = sqrt(numero_usuario); contador >= 1; contador--) {
    if (numero_usuario % contador == 0) {
      std::cout << " " << (numero_usuario / contador);
    }
  }
  return 0;
}
int main() {
  int numero_usuario;
  while(std::cin >> numero_usuario) {
    CalculadoraDivisores(numero_usuario);
    std::cout << std::endl;
  }
  return 0;
}