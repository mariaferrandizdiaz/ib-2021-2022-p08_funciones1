/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i-th_position.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa dice el lugar donde se encuentra un numero introducido.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
 
#include <iostream>
#include <string>

void PosicionIntroducida(int posicion) {
  // MensajeDeContinuacion();
  std::array<int,10000> numeros_introducidos;
  int contador = 0;
  for (contador = 1; contador < 100; contador++) {
    std::cin >> numeros_introducidos[contador];
    if (contador == posicion) {
      std::cout << "At the position " << posicion << " there is a(n) " << numeros_introducidos[contador] << '.' << std::endl;
      break;
    }
  }
}
void PosicionDigito(std::string cadena_usuario, int numero_usuario) {
  for (int i = 0; i <= static_cast<int> (cadena_usuario.length()); i++) {
    if (cadena_usuario[i] == numero_usuario) {
      std::cout << cadena_usuario[i];
    }
  }
}

int main() {
  std::string cadena_usuario;
  int numero_usuario;
  std::cin >> numero_usuario;
  std::cin >> cadena_usuario;
  getline(std::cin, cadena_usuario);
  PosicionDigito(cadena_usuario, numero_usuario);
  /**if (cantidad_a > 0) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }*/
  return 0;
}