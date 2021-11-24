/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file parentesis.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa indica si los parénteesis introducidos por usted cierran corretamente o no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
#include <string>
#include <vector>

bool NumberOfParentheses(std::string frase_usuario) {
  int close{0};
  for (int contador = 0; contador < frase_usuario.length(); ++contador) {
    if (frase_usuario.at(contador) == '(') {
      close++;
    }
    if (frase_usuario.at(0) == ')' || frase_usuario.at(frase_usuario.length() - 1) == '(') {
      close = 1;
      return close;
    }
    if (frase_usuario.at(contador) == ')') {
      close--;
    }
  }
  return close;
}

int main() {
  std::string frase_usuario;
  std::getline(std::cin, frase_usuario);
  bool close{false};
  close = NumberOfParentheses(frase_usuario);
  if (close == 0) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}