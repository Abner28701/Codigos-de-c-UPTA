#include<stdio.h>
using namespace std;

int main()
{
    int var1,var2,var3,result;
    
    printf("Ingrese el primer numero");
    scanf("%d",&var1);
    printf("Ingrese el primer numero");
    scanf("%d",&var2);
    printf("Ingrese el primer numero");
    scanf("%d",&var3);
    
    result=(var1+var2+var3)/3;
    
    if(result>7){
    printf("APROBADO");
    }else{
    printf("MEJORE LA NOTA");
    }
    
    return 0;
}