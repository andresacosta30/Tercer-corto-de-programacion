#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
int num,fallos=0;
string respuesta="no";
srand(time(NULL));
do{
num=1+rand()%(101-1);
cout<<"El numero que has pensado es este?-->"<<num<<endl;
cin>>respuesta;
fallos++;
}while(respuesta=="no");
if (respuesta=="si"){
cout<<"Gane!"<<endl;
cout<<"He fallado "<<fallos-1<<" veces."<<endl;
}
return 0;
}
