#include <stdio.h>
#include <iostream>

using namespace std;

/* Realice un programa que calcule el factorial de un número entero sin signo */
// 3! = 3 * 2 * 1 = 6

int mult(int a, int b){
  int i = 0, result_mult = 0;
  while(i < a){
    result_mult = result_mult + b;
    i++;
  }
  return result_mult;
}

int fac(int a){
  int result_fac = 1;
  while(a > 1){
    result_fac = mult(result_fac,a);
    a--;
  }
  return result_fac;
}

int main(){
  int a;
  cout << "Ingrese el factorial que desea calcular: " << endl;
  cin >> a;
  cout << "El resultado es: " << fac(a) << endl;
  return 1;
}
