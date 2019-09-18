
#include <iostream>
#include <string>
using namespace std;

float suma=0,pob=0;
int x=0,y=0;

struct county{
    string nombre;
    string capital;
    int habitantes;
    int edad;
};

struct continente{
    string nombre;
    county pais[5];
};

int main(){
    continente continentes[5];

    for(int i=0;i<5;i++){
        suma=0;
        cout<<i+1<<" .Digite el nombre del continente: ";
		getline(cin,continentes[i].nombre);
        
		for(int k=0;k<5;k++){
			
            cout<<k+1<< " .Digite el nombre del pais: ";
			cin>>continentes[i].pais[k].nombre;
			
            cout<< "  .Digite la capital del pais: ";
			cin>>continentes[i].pais[k].capital;
			
            cout<< "  .Digite el numero de habitantes del pais: ";
			cin>>continentes[i].pais[k].habitantes;
			
            cout<< "  .Digite el promedio de la edad de los habitantes del pais: ";
			cin>>continentes[i].pais[k].edad;
			
            suma+=continentes[i].pais[k].habitantes;
        }
        cin.clear();
		cin.ignore(100000,'\n');
        cout<<"Poblacion total del continente  es: "<<suma<<endl;


    }
      
    return 0;
}
