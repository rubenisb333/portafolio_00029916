#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct Polinomio{
    int expo;
	float coefi;
};
typedef struct Polinomio polins;
vector<polins>lista; 

polins meterdatos(){
    polins p;
    cout << "Ingresar coeficiente de x : "<<endl; 
	cin >> p.coefi;
    cout << "Ingresar Exponente de x : "<<endl; 
	cin >> p.expo;
    return p;
}

float valor(){
    float n=0;
    float resultado=0;
    cout<<"Ingrese un valor para x: "<<endl;
    cin>>n;
    for (int i=0; i<lista.size(); i++) {
    resultado+=lista[i].coefi*pow(n,lista[i].expo);
    }
    return resultado;
}

void adddatos(){
    polins p = meterdatos();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

int main(){
    cout << "Inicializando..." << endl;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar datos \n\t2) Ver resultado"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "\tIngresando" << endl;
                adddatos();
            break;
            case 2: cout << "Calculando" << endl;
                cout<<"El resultado es : "<< valor()<<endl;;
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
