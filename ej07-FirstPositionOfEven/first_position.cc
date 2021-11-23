/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_position.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief This program reads a sequence of natural numbers and prints the position of the first even number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream> 

int PrintFirstEven(int numero_usuario, int& contador) {
  contador++;
  if ((numero_usuario % 2) == 0) {
    return contador;
  }
  return 0;
}

int main() {
  int numero_usuario, even, contador{0};
  while (std::cin >> numero_usuario) {
    even = PrintFirstEven(numero_usuario, contador); 
    if (even != 0) {
    std::cout << contador << std::endl;
    break;
    }
  }
  return 0;
}