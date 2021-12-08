/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file concatenationsvector.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 25 2021
  * @brief Este programa muestra la concatenacion de dos vectores.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>
#include <vector>

std::vector<int> Concatenation(const std::vector<int>& v1, const std::vector<int>& v2){
  std::vector<int> vectorconcatenado = v1; 
  vectorconcatenado.insert(vectorconcatenado.end(), v2.begin(), v2.end());
  return vectorconcatenado;
}

int main() {
  std::vector<int> v1;
  std::vector<int> v2;
  Concatenation(v1, v2);
  return 0;
}