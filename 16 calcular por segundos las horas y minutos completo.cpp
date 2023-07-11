#include<stdio.h>

int main(){

int horas, minutos, segundos=0;

printf("Segundos Totales");
scanf("%d", &segundos);
horas=segundos/3600;
segundos=segundos %3600;
minutos=segundos/60;
segundos=segundos %60;

printf("Equivalen a %2d horas %2d minutos %2d segundos");

}


