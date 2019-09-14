//Torre de Hanoi//

#include<iostream>

using namespace std;

void hanoi(int n,char A,char B,char C)
{
	if(n==1){
		cout<<"Mover Disco de la torre "<<n<<" de "<<A<<" hasta "<<C<<endl;
		return ;
	}
	hanoi(n-1,A,C,B);
	cout<<"Mover Disco de la torre "<<n<<" de "<<A<<" hasta "<<C<<endl;
	hanoi(n-1,B,A,C);
	
}
int main(){
	int n;
	
	cout<<"Ingrese numero de discos: "; cin>>n;
	hanoi(n,'A','B','C');
	
	return 0;		
}
