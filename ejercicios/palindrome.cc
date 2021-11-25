#include <iostream>
using namespace std;

int main() {
  char frase_usuario[20];
  int i, length;
  int flag = 0;
  std::cin >> frase_usuario;
  length = strlen(frase_usuario);
  for(i=0;i < length ;i++){
    if(frase_usuario[i] != frase_usuario[length-i-1]){
      flag = 1;
      break;
    }
  }
    
    if (flag) {
      std::cout << frase_usuario << " is not a palindrome" << endl; 
    }    
    else {
      std::cout << frase_usuario << " is a palindrome" << endl; 
    }
    system("pause");
    return 0;
}