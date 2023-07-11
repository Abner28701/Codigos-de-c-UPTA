#include<iostream>
using namespace std;

int main()
{
    int diaA,mesA,aniA;
    int diaN,mesN,aniN;
    
    int aniB=1900;
    
    printf("INGRESE LA FECHA ACTUAL\n");
    printf("Día: ");
    scanf("%d",&diaA);
    printf("Mes: ");
    scanf("%d",&mesA);
    printf("Anio: ");
    scanf("%d",&aniA);
    printf("INGRESE LA FECHA DE NACIMIENTO\n");
    printf("Día: ");
    scanf("%d",&diaN);
    printf("Mes: ");
    scanf("%d",&mesN);
    printf("Anio: ");
    scanf("%d",&aniN);
    if(aniA<aniB||aniN<aniB){
    printf(".");
    }
    
    
    return 0;
}