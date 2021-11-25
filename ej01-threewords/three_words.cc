/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three_words.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa devuelve las tres palabras introducidas por el usuario pero en orden inverso.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
 
#include <iostream>

/**
 * @brief funcion que imprime el orden inverso de las palabras que haya introducido el usuario
 * @param palabra_1 primera palabra introducida por el usuario
 * @param palabra_2 segunda palabra introducida por el usuario
 * @param palabra_3 tercera palabra introducida por el usuario
 */

void ImprimePalabras(std::string palabra_1, std::string palabra_2, std::string palabra_3) {
  std::cout << palabra_3 << " " << palabra_2 << " " << palabra_1 << std::endl;
}

int main() {
  std::string palabra_1, palabra_2, palabra_3;
  std::cin >> palabra_1 >> palabra_2 >> palabra_3;
  ImprimePalabras(palabra_1, palabra_2, palabra_3);
  return 0;
}