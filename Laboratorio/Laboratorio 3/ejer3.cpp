#include <iostream>
#include <cstdlib>

using namespace std;
struct libro{
	string titulo;
	int numPaginas;
	libro *sig;
};
int contador=0;
void menu(){
	cout<<endl;
	cout<<"\tMenu  "<<endl;
	cout<<"Seleccionar una opcion: "<<endl;
	cout<<"\n1.Digite el nombre de libro ";
	cout<<"\n2.Buscar libro ";
	cout<<"\n3.Salir "<<endl;
}
void buscarlibro(libro *Tlibro, string nombre){
	if ( contador==0){
		cout<<"El libro no existe."<<endl;
	}

	if(Tlibro->titulo==nombre){
		cout<<"El n.de paginas es: "<<(Tlibro->numPaginas);
		cout<<endl;
	}
	else{
		buscarlibro(Tlibro->sig,nombre);
	}
}

int main(){
	libro *Tlibro;
	libro *inicio;
	while (2){
		menu();
		int opcion;
		cout<<"Eliga la opcion: ";
		cin>>opcion;
	if(opcion==3){
	cout<<"Ha salido";
	break;
	system("PAUSE");
    }
		switch (opcion){
		case 1:
			 contador+=1;
			Tlibro = new libro;
			cout<<"Ingrese el nombre de el libro: ";
			cin>>Tlibro->titulo;
			cout<<"Ingrese el Numero de paginas: ";
			cin>>Tlibro->numPaginas;
			Tlibro->sig=inicio;
			inicio=Tlibro;
			break;
		case 2:
			string lib;
			cout<<"Digite el Libro que desea saber el n.de paginas: ";
			cin>>lib;
			buscarlibro(inicio, lib);
			break;
/*	if(opcion==3){
	cout<<"Ha salido";
	break;
	system("PAUSE");
    return 0;}*/
	    return 0;			
	}
	}
	
}

