 #include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int a,b,c;

cout<<" Introduce los numeros"<<endl;
cin>>a;

cout<<" Introduce los numeros"<<endl;
cin>>b;

cout<<" Introduce los numeros"<<endl;
cin>>c;

if((a<b and a>c)or(a>b and a<c)){
	
	cout<<" el numero medio es"<<a<<endl;
}

if((b<a and b>c)or(b>a and b<c)){
	
	cout<<" el numero medio es"<<b<<endl;
	
}


if((c<a and c>b)or(c>a and c>b)){

	cout<<" el numero medio es"<<c<<endl;
}





	system("PAUSE");
    return 0;
}
