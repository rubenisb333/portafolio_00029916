/*Escribir una función recursiva que devuelva la cantidad de 
dígitos de un número entero.*/
#include<iostream>
#include <stdio.h>

using namespace std;
 
//funcion recursiva
int conta(int num)
{
    static int count=0;
     
    if(num>0)
    {
        count++;
        conta(num/10);
    }else
    {
        return count;
    }
}
int main(){
	int number;
	int count=0;
     
    cout<<"Ingrese un numero entero: ";
    cin>>number;
     
    count=conta(number);
     
    cout<<"\nCantidad de digites del numero: "<<count;
     
    return 0;
}
