#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

/* Realice un programa que calcule un polinomio de grado n, en donde los coeficientes
  del polinomio se encuentran almacenados en un vector k de n+1 posiciones, de la
  siguientes forma:
  En donde el ki se encuentra en la posición k[i] del vector k.*/

int mult(int a, int b){
    int i = 0, result = 0;
    while(i < a){
      result = result + b;
      i++;
    }
    return result;
  }

int pot(int a, int b){
    int result_pot = 1, i = 0;
    while(i < b){
      result_pot = mult(result_pot, a);
      i++;
    }
    return result_pot;
  }

int polinomio(int x, vector<int> v_k, int n){
  int i = 0, result_pol = 0;
  while(i <= n){
    result_pol = result_pol + mult(v_k[i],pot(x,i));
    i++;
  }
  return result_pol;
}

int main(){
  vector<int> v_k;
  int x, n, in;
  cout << "Ingrese la variable X: " << endl;
  cin >> x;
  cout << "Ingrese la variable N: " << endl;
  cin >> n;
  cout << "Ingrese " << n+1 << " coeficientes: "<< endl;
  for(int i = 0; i < n+1; i++){
    cin >> in;
    v_k.push_back(in);
  }
  cout << "El resultado es: " << polinomio(x,v_k,n) << endl;

}
