/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors_in_order.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa imprime en orden todos los divisores de un numero.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>
#include <cmath>

/**
 * @brief función encargada de hallar los divisores del numero introducido por el usuario.
 * @param numero_usuario numero introducido por el usuario del que queremos obtener los divisores.
 */

int CalculadoraDivisores(const int numero_usuario) {
  std::cout << "divisors of " << numero_usuario << ":";
  for (int contador = 1; contador < sqrt(numero_usuario); ++contador) {
    if (numero_usuario % contador == 0) {
      std::cout << " " << contador;
    }
  }
  for (int contador = sqrt(numero_usuario); contador >= 1; --contador) {
    if (numero_usuario % contador == 0) {
      int resultado{0};
      resultado = numero_usuario / contador;
      std::cout << " " << resultado;
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