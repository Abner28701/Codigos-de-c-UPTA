#include<iostream>

using namespace std;
int main()

{
int i,n,c=0;
cout<<"ingresa el numero";
cin>>n;

for(i=1; i<= n; i++){
   if(n % i==0){
   c++;
   }
}

if(c==2){
  cout<<"El Numero" <<n<< "Es primo: 1";
}
else{
    cout<<"El Numero" <<n<< "No es primo: 0";
}

return 0;


}