#include<iostream>
using namespace std;
int main()

{
   int n;
   float precio, descuento, total;
   cout<< "ingresa el precio de lascamisas";
   cin>> precio;
   cout<< "Ingresa el numero de camisas a comprar: ";
   cin>> n;
   total = n * precio;
   if (n>= 3){
       descuento = total * .20;
  }
else{
   descuento = total * .10;
}
cout<< "El total a pagar es: $"<<total - descuento <<endl;
cout<< "El descuento aplicado es: $"<<descuento;
return 0;

