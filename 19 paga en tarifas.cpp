#include<iostream>
using namespace std;

int main(){

  int valor=0;

  cout<<"ingresa cuántos datos quisiera incluir";
  cin>>valor;

   int vl[valor], v2[valor];
   float v3[valor];

  system("cls");
  cout << "incluye los datos sugeridos";
  cout << endl << endl <<endl;

  for(int i=0); i<valor; i++){
  cout<<"ingresa horas trabajadas:";
  cin>>vl[i];
  cout<<endl;

  cout<<"ingresa tarifa por horas:";
  cin>> vl[i];
  cout<<endl;

   v3[i] = v1[i] * v2[i];

}
  System ("cls");
  cout <<"los datos adquiridos son";
  cout <<endl<<endl<<endl;

for (int i=0; i<valor; i++){
    cout << "horas:" <<vl[i]<<        tarifas: "<<2[i]<<";
            
    cout <<endl<<endl<<endl;
    
    system("pause");
  }
}



