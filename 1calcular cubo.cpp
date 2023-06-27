#include<iostream>
#include<Math.h>
using namespace std;

void funcion_cubo(float x, float y)
{
cin>>x;
y=pow(x,3);
cout<<"El cubo del número" "<<x<<" " es: "<<y<<endl;

}
int main()
{
float a,b;
cout<<"ingrese un numero:" <<endl;
funcion_cubo(a,b);
return 0;