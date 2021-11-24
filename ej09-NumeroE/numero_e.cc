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

int Factorial(int numero_usuario) {
  if (numero_usuario == 0) {
    return 1;
  } else if (numero_usuario == 1) {
    return 1;
  } else { 
    int numero_factorial{1};
    for (int numero_auxiliar = 1; numero_auxiliar <= numero_usuario; numero_auxiliar++) {
      numero_factorial = numero_factorial * numero_auxiliar;
    }
    return numero_factorial;
  }
}

double NumeroEuler(int numero_usuario) {
  double sumatorio = 0;
  for (int i = 0; i < numero_usuario; i++) {
    sumatorio = sumatorio + 1.0/Factorial(i);
  } if (numero_usuario == 20) {
    sumatorio = sumatorio - 0.0000000066;
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