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
#include <vector>

void PosicionLetraUsuario(std::vector<int> numeros_usuario[100], int numero_posicion) {
  int localizador = numero_posicion + 1;
  std::cout << "At the position " << numero_posicion << " there is a(n) " << numeros_usuario[localizador] << "." << std::endl;
  return;
}

int main(){
  int numero_posicion;
  std::cin >> numero_posicion;
  std::vector<int> numeros_usuario[100];
  for (int indice = 0; indice <= 90; ++indice) {
    std::cin >> numeros_usuario[indice];
  }
  PosicionLetraUsuario(numeros_usuario, numero_posicion);
  return 0;
}