#include<iostream>
#include<stdio.h>
#include<conio.h>

int main(){
float cm;
float pulgadas;

printf("Combertir de Pulgadas a Centimetros/n");
printf("Escribir Pulgadas:"); scanf("%d. &pulgadas");

cm= pulgadas * 2.54;
printf("%d pulgadas equivale a %7.2f centimetros",pulgadas,cm);

getch();


}