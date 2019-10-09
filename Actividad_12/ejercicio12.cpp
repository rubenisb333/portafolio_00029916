#include <iostream>

using namespace std;

struct Orden{
    int revueltas;
    int frijolconqueso;
    int queso;
};
typedef struct Orden Cantidad;

Orden solicitarCantidad(){
    Orden p;
    cout << "Cuantas revueltas: "; 
	cin >> p.revueltas;
    cout << "Cuantas de frijol con queso: ";   
	cin >> p.frijolconqueso;
    cout << "Cuantas de queso "; 
	cin >> p.queso;
    return p;
}

void mostrarCantidad(Cantidad p){
    cout << "Revueltas : " << p.revueltas << endl;
    cout << "Frijol con queso: " << p.frijolconqueso<< endl;
    cout << "queso: " << p.queso << endl;
    cout << endl;
}

struct TNodo{
    Cantidad dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pMenu;

void insertarMenu(Cantidad p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pMenu;
    
    pMenu = nuevo;
}

void insertarConfirmacion(Cantidad p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pMenu == NULL) {
        pMenu = nuevo;
    } else {
        Nodo *p = pMenu;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarCantidad(){
    Cantidad p = solicitarCantidad();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarMenu(p);
                continuar = false;
            break;
            case 2: insertarConfirmacion(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pMenu;

    while (s != NULL) {
        mostrarCantidad(s->dato);
        s = s->sig;
    }
}

int main(){
	cout<<endl;
    cout << "///////////////////Pupuseria La Malacate//////////////////" << endl;
    pMenu = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout<<endl;
        cout << "Menu: \n\t1) Agregar a Orden\n\t2) Ver Orden"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando pupas" << endl;
                agregarCantidad();
            break;
            case 2: cout << "Listando de pupusas" << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
