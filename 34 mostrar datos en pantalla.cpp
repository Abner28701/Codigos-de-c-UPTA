#include<iostream>


int main()
{
    char nombre[10];
   int edad;
   float altura;
    
    printf("ingresa tu nombre:");
    scanf("%s"), &nombre;
    
    printf("ingresa tu edad:");
    scanf("%d"), &edad;
    
    printf("ingresa tu altura en metros:");    
    scanf("%f"), &altura;
    
    printf("\nnombre:s%", nombre);
    printf("\edad:d%", nombre);
    printf("\altura:f%", nombre);
}