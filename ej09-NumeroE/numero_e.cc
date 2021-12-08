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

/**
 * @brief Funcion que realiza el factorial del número ingresado por el usuario 
 * @param numero_usuario numero introducido
 * @return double factorial
 */
int Factorial(const int numero_usuario) {
  int factorial{1};
  if(numero_usuario < 0) {
    factorial = 1;
  } else if(numero_usuario == 0) {
    factorial = 1;
  } else {
    for (int i = 1; i <= numero_usuario; i++){
      factorial = factorial * i;
    }
  }
  return factorial;
}

/**
 * @brief Sumatorio para hallar la aproximación al número e
 * @param numero_usuario numero introducido
 * @return double sumatorio final
 */
double NumeroEuler(const int numero_usuario) {
  double sumatorio{0};
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