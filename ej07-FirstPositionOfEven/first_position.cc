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

/**
 * @brief funcion encargada de calcular si el numero que está leyendo en ese momento es par o impar.
 * @param numero_usuario 
 * @param contador localizador que recorre las distintas variables introducidas por el usuario
 */

int PrintFirstEven(int numero_usuario, int& contador) {
  contador++;
  if ((numero_usuario % 2) == 0) {
    return contador;
  }
  return 0;
}

int main() {
  int numero_usuario, primer_par, contador{0};
  while (std::cin >> numero_usuario) {
    primer_par = PrintFirstEven(numero_usuario, contador); 
    if (primer_par != 0) {
      std::cout << contador << std::endl;
      return 0;
    }
  }
  return 0;
}