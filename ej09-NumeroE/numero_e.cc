/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file numero_e.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa devuelve las tres palabras introducidas por el usuario pero en orden inverso.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
 
#include <iostream>
#include <math.h>
#include <iomanip>

double Factorial(int numero) {
  if (numero == 0) {
    return 1;
  } else if (numero == 1) {
    return 1;
  } else {
    return numero * Factorial(numero - 1);
  }
}

double NumeroEuler(int numero_usuario) {
  double sumatorio = 0;
  for (int i = 0; i < numero_usuario; i++) {
    sumatorio = sumatorio + 1.0/Factorial(i);
  } 
  return sumatorio;
}

int main() {
  int numero_usuario;
  while(std::cin >> numero_usuario) {
  std::cin.ignore();
  long double resultado = NumeroEuler(numero_usuario);
  std::cout << std::fixed << std::setprecision(10) << "With " << numero_usuario << " term(s) we get " << resultado << "." << std::endl;
  }
  return 0;
}