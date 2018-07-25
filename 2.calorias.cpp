 #include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int minutos,dormir,sentarse,n;

cout<<"para calcular calorias quemadas durmiendo digite 1, o 2 para hacer el calculo mientras estaba sentado"<<endl;
cin>>n;

if(n==1){
	cout<<"ingrese el numero de minutos que durmio"<<endl;
	cin>>minutos;
	dormir=minutos*1.08;
	
	cout<<"mientras usted dormia"<<minutos<<" minutos "<<"usted quemo"<<dormir<< "Calorias"<<endl;
	
	
}else{
	cout<<"ingrese el numero de minutos que permanecio sentado"<<endl;
	cin>>minutos;
	sentarse=minutos*1.66;
	
	cout<<"mientras usted estaba sentado"<<minutos<<"usted quemo"<<sentarse<<" calorias"<<endl;
	
}

	system("PAUSE");
    return 0;
}
