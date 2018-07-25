 #include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

float h=0;
cout<<"ingrese el numero de horas laborado"<<endl;
cin>>h;

if(h<=40){
	
	cout<<"por:"<<h<<"horas trabajadas usted se ha ganado:"<<h*16<<"pesos"<<endl;
}
else{
		cout<<"por:"<<h<<"horas trabajadas usted se ha ganado:"<<(h-40)*20+640<<"pesos"<<endl;
}

	system("PAUSE");
    return 0;
}
