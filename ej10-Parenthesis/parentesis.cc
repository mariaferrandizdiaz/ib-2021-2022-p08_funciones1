/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_position.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
#include <string>
#include <vector>

bool NumberOfParentheses(std::string introduced_sentence) {
  int close{0};
  for (int contador = 0; contador < introduced_sentence.length(); ++contador) {
    if (introduced_sentence.at(contador) == '(') {
      close++;
    }
    if (introduced_sentence.at(0) == ')' || introduced_sentence.at(introduced_sentence.length() - 1) == '(') {
      close = 1;
      return close;
    }
    if (introduced_sentence.at(contador) == ')') {
      close--;
    }
  }
  return close;
}

int main() {
  std::string introduced_sentence;
  std::getline(std::cin, introduced_sentence);
  bool close{false};
  close = NumberOfParentheses(introduced_sentence);
  if (close == 0) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}