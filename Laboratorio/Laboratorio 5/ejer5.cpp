#include <iostream>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;



Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}
//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
 //solicitar informacion (numero a agregar)
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
   
    Arbol p = a;
   //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
   
 //agregar el nuevo nodo
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

//--------- Recorrer un arbol---------
void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }

}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << " " << a->info;
    }
}

void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:";
	preorden(a); 
	cout << endl;
    cout << "Recorrido IN orden:";
	inorden(a); 
	cout << endl;
    cout << "Recorrido POST orden:";
	postorden(a); 
	cout << endl;
}
//codigo para el ejercicio especifico
struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo nodoL;
nodoL *pInicio;

int Buscar(Arbol a, int O) {
   Arbol B = a;

   while(B!=NULL) {
      if(O == B->info) return B->info;
      else if(O < B->info) B = B->izq; 
      else if(O > B->info) B = B->der;
   }
   return false; 
}


void insertarInicio(int num) {
    nodoL *nuevo = new nodoL;
    nuevo->dato = num;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}




void mostrarLista() {
    nodoL *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->sig;
    }
}

int main(){
    int variable = 0;
    cout<<"Digite la Raiz"<<endl;
    cin>>variable;
 
    Arbol arbol = crearArbol(variable);
   
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar datos al arbol\n\t2) Recorrer"
            << "\n\t3) Dejar de agregar datos al Arbol\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
   
    int y,s;
    cout<<"Ingrese un numero para vereficar la ubicacion: ";
    cout<<endl;
    cout<<"Presiona 0 para parar"<<endl;
    bool seguir=true;
    
    do{
    cin>>y;
    s= Buscar(arbol,y);
    if (y==0){
        seguir=false;
    }
    else if(y==s){
       
        insertarInicio(y); }
    else {cout<<"numero no encotrado"<<endl;}

   
    }while(seguir);
   
    cout<<"Numeros encontrados: ";
   
    mostrarLista();
    
    return 0;
}

