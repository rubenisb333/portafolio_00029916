//multiplicacion recursiva//
#include<iostream>
#include<stdlib.h>

using namespace std;


int multi(int,int);

int main(){
int n1,n2,p;

cout<<"Introduzca primer numero: ";
cin>>n1;
cout<<"Intruduzca segundo numero: ";
cin>>n2;	
p=multi(n1,n2);

cout<<"producto: "<< p <<endl;
system ("pause");

}
int multi(int a,int b){
	if(a==0 || b==0)
	return 0;
	else{
		return a+multi(a,b-1);
	}
}

