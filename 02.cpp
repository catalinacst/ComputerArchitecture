#include <stdio.h>
#include <iostream>

/* Realice un programa que calcule la potencia de dos números enteros sin signo realizando llamados a la función desarrollada en el punto 1.*/
// 2^3 = 2 * 2 * 2 = 8
using namespace std;

int mult(int a, int b){
  int i = 0, result_mult = 0;
  while(i < a){
    result_mult = result_mult + b;
    i++;
  }
  return result_mult;
}

int pot(int a, int b){
  int result_pot = 1, i = 0;
  while(i < b){
    result_pot = mult(result_pot, a);
    i++;
  }
  return result_pot;
}

int main(){
  int a, b;
  cout << "Ingrese el coeficiente y la potencia: " << endl;
  cin >> a >> b;
  //cout << "El resultado es: "<< add(a,b) << endl;
  cout << "El resultado es: "<< pot(a,b) << endl;
  return 1;
}
