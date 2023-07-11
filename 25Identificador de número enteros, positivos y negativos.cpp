#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Ingresa un Numero";
cin>> n;
if (n==0){
   cout<<"El Numero"<<n<< "Es Neutro"; 
}
else{
     if (n<0){
        cout<<"El Numero"<<n<<"Es Negativo";       
}
else{
    cout<< "El Numero"<<n<<"Es Positivo";
}

}
}    
