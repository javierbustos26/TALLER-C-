 #include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

float sc1,sc2,sc3,t;

cout<<" Ingrese la inversion del socio 1 "<<endl;
cin>>sc1;

cout<<" Ingrese la inversion del socio 2 "<<endl;
cin>>sc2;

cout<<" Ingrese la inversion del socio 3 "<<endl;
cin>>sc3;

t=sc1+sc2+sc3;
sc1=(sc1*100)/t;
sc2=(sc2*100)/t;
sc3=(sc3*100)/t;

cout<<" la inversion total es de: "<<t<<" pesos "<<endl;
cout<<"la inversion del socio 1 es el "<<sc1<<" % "<<endl;
cout<<" la inversion del socio 2 es el "<<sc2<<"%"<<endl;
cout<<" el porcentaje del socio 3 es el "<<sc3<<" % "<<endl;






	system("PAUSE");
    return 0;
}
