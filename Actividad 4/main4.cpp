
#include <iostream>
#include <string>
using namespace std;

float suma=0,prom=0,pob=0,aux=0;
int x=0,y=0;

struct county{
    string nombre;
    string capital;
    int habitantes;
    float promedio_edad;
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
			cin>>continentes[i].pais[k].promedio_edad;
			
            suma+=continentes[i].pais[k].habitantes;
        }
        cin.clear();
		cin.ignore(100000,'\n');
        cout<<"La suma total por continente "<<continentes[i].nombre<< " es: "<<suma<<endl;


    }
    for(int i=0;i<5;i++){
        cout<<continentes[i].nombre<<endl;
        for(int k=0;k<5;k++){
            cout<<continentes[i].pais[k].nombre<<endl;
            cout<<continentes[i].pais[k].capital<<endl;
            cout<<continentes[i].pais[k].habitantes<<endl;
            cout<<continentes[i].pais[k].promedio_edad<<endl;
            aux + = continentes[i].pais[k].promedio_edad;
        }
    for (int i=0;i<5;i++){
        for (int k=0;k<5;k++)
            if (continentes[i].pais[k].habitantes>pob){
                pob=continentes[i].pais[k].habitantes;
                x=i;
                y=k;
            }
        }
    }
    prom=aux/25;
    cout<<"La capital mas poblada es: "<<continentes[x].pais[y].capital<<pob<<endl;
    cout<<"El promedio mundial es: "<<prom<<endl;
    
    return 0;
}
