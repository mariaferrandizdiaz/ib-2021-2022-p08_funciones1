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

/**
 * @brief Esta funcion se encarga de leer los numeros que haya introducido el usuario hasta la posicion que este había indicado al inicio.
 * @param kPosicion_usuario la posicion de la que quiere descubrir el numero.
 * @return int 0
 */ 

int PosicionLetraUsuario(const int kPosicion_usuario) {
  int contador{0}, numero_usuario;
  while (std::cin >> numero_usuario) {
    ++contador;
    if(contador == kPosicion_usuario) {
      std::cout << "At the position " << kPosicion_usuario << " there is a(n) " << numero_usuario << "." << std::endl;
    }
  }
  return 0;
}

int main(){
  int posicion_usuario;
  std::cin >> posicion_usuario;
  PosicionLetraUsuario(posicion_usuario);
  return 0;
}