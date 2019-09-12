//Primer actividad del portafolio//
/*Modifique dicho programa para poder visualizar en consola las
direcciones de memoria de las variables, el contenido de los
punteros, etc.*/

#include<iostream>
using namespace std;

void calculos(int num, int *doble, int *tiple){
	*doble= 2 * num;
	*tiple = 3 * num;
}

int main(void){
	int numero=2, doble =0, tiple =0;
	
	calculos(numero,&doble,&tiple);
	
	cout<<"El doble de 2 es: "<<doble<<endl;
	cout<<"el tiple de 2 es: "<<tiple<<endl;
	
	int*puntero=&numero;
    cout<<"puntero: "<<puntero<<endl;
	cout<<"(*puntero): "<<(*puntero)<<endl;
	cout<<"&puntero: "<<&puntero<<endl;
	
	int*punterob=&doble;
	cout<<"punterob: "<<punterob<<endl;
	cout<<"(*punterob): "<<(*punterob)<<endl;
	cout<<"&punterob: "<<&punterob<<endl;
	
	int*punteroc=&tiple;
	cout<<"punteroc: "<<punteroc<<endl;
	cout<<"(*punteroc): "<<(*punteroc)<<endl;
	cout<<"&punteroc: "<<&punteroc<<endl;
	
	return 0;
}
