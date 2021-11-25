
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three_words.cc
  * @author alu0101475899@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa devuelve las tres palabras introducidas por el usuario pero en orden inverso.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  *//
#include<iostream>

int main(){
  int auxEntero = 0;
  int rangoBusqueda = 0;
  std::cin>>rangoBusqueda;
  for(int i = 1; i <= rangoBusqueda; i++){
    if(i % 2 == 0){
      for(int j = (i / 2); j >= 1 ; j--){
        if( i % j == 0){
          auxEntero = auxEntero + j;
        }
      }
      if(auxEntero == i)
        std::cout<<"Número Perfecto "<<auxEntero <<endl;
      }
      auxEntero = 0;
  }
  return 0;
}





















bool isPerfect(long long int n) {
  long long int sum = 1;
  for (long long int i = 2; i*i<=n; i++) {
    if (n % i == 0) {
      if(i * i != n)
        sum = sum + i + n/i;
      } else {
        sum = sum + i;
      }
    }
    if (sum == n && n != 1) {
      return true;
    }
     return false;
}
  
int main() {
  int numero_usuario;
  for (int n =2; n < numero_usuario; ++n)
        if (isPerfect(n))
            std::cout << n << " is a perfect number\n";
  
    return 0;
}