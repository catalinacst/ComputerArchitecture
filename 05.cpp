#include <stdio.h>
#include <iostream>

using namespace std;

/* Realice un programa calcule la división entera entre dos números enteros */

int rest(int a, int b){
  int result_rest = 0;
  while(a - b > 0){
    result_rest++;
    a = a - b;
  }
  return result_rest;
}

int main(){
  int a, b;
  cout << "Ingrese los dos numeros a dividir: " << endl;
  cin >> a >> b;
  cout << "El resultado es: " << rest(a,b) << endl;
  return 1;
}
