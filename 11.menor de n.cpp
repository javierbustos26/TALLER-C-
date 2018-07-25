 #include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int n,a,b;

cout<<"introduzca la cantidad de numeros a digitar"<<endl;
cin>>n;

cout<<" introduzca un numero"<<endl;
cin>>a;

for(int i=1;i<=n;i++){
	
	cout<<" introduzca otro numero"<<endl;
	cin>>b;
	
	if(b<a){
		a=b;
	}
}

cout<<"el numero menor es "<<a<<endl;



system("PAUSE");
    return 0;

}

	


	



		



