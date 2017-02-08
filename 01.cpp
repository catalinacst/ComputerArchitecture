#include <stdio.h>
#include <iostream>

/* Hacer un programa que calcule la multiplicación de dos enteros sin signo usando solo sumas.*/
// 3 * 2 = 2 + 2 + 2
using namespace std;

int mult(int a, int b){
  int i = 0, result = 0;
  while(i < a){
    result = result + b;
    i++;
  }
  return result;
}

int main(){
  int a, b;
  cout << "Ingrese los numeros que desea multiplicar: " << endl;
  cin >> a >> b;
  cout << "El resultado es: "<< mult(a,b) << endl;
  return 1;
}
