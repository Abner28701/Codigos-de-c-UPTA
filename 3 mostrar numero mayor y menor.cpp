#include<iostream>
using namespace std;
int i, mayor, menor;
void llenar(int vector [], int x);
void encontrarmenor(int vector[], int x);
void encontrarmayor(int vector[], int x); 

void encontrarmayor(int vector[], int x){
  for (i = 0; i < x; ++i){
    if (i == 0){
       mayor = vector[i];
    }
    else{
         if (vector[i]>mayor){
            mayor = vector [i];
    }
  }
}

void encontrarmenor(int vector[], int x){
  for (i = 0; i <x; ++i){
    if (i == 0){
       menor = vector[i];
    }
    else{
         if (vector[i]< menor){
            menor = vector [i];
    }
  }
}


void llenar(int vector [], int x){
 for (i = 0; i <x; ++i){
  cout<< "ingresa un numero: ";
  cin>> vector [i];
 }
}

int main()
{
{
  int n;
  cout<< "ingrese el tamaño del arreglo:";
  cin>> n;
  int vec[n];
  llenar(vec, n);
  encontrarmayor(vec, n);
  encontrarmenor(vec, n);
  cout<< "el numero mayor es:"<<mayor << endl;
  cout<< "el numero menor es:"<<menor;


 return 0;
}
}