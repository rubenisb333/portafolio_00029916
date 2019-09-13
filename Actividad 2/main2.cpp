/*Pragrama para calcular la madiana
ejercicio de arreglos y punteros 20/08/2019*/

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

//Funcion para la madiana

float mediana(int a[], int t) 
{

sort(a, a + t);

if (t % 2 !=0)
          return(float)a[t/2];
     
	 return(float)(a[(t-1)/2] + a[t/2])/2.0; 
}
      
int main(void){
	int a[]={2,9,8,4,7,5,3,6,1};
	int t= sizeof(a)/sizeof(a[0]);
	cout<<"La mediana es: "<<mediana(a,t)<<endl;
	
	return 0;
}     
      
