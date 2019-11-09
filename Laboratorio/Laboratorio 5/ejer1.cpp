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
    Arbol p=new Nodo;
    p->info=x;
    p->izq=NULL;
    p->der=NULL;
    return p;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout<<"Error: arbol vacio"<<endl;
    else if(a->izq != NULL)
        cout<<"Error: subarbol IZQ ya existe"<<endl;
    else
        a->izq=crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout<<"Error: arbol vacio"<<endl;
    else if(a->der != NULL)
        cout<<"Error: subarbol DER ya existe"<<endl;
    else
        a->der=crearArbol(unDato);
}

void agregarNodo(Arbol a){
	//solicitar informacion (numero a agregar)
    int numero = 0;
    cout<<"Numero a agregar: ";
    cin>>numero;
    
    Arbol p=a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout<<"Error: "<<numero<<" ya existe"<<endl;
            return;
        }
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
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

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout <<" "<< a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout<<" "<<a->info;
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout<<" "<<a->info;
    }
}

void recorrerArbol(Arbol a){
    cout<<"Recorrido PRE orden:";
	preorden(a); 
	cout<<endl;
    cout<<"Recorrido IN orden:";
	inorden(a); 
	cout<<endl;
    cout<<"Recorrido POST orden:";
	postorden(a); 
	cout<<endl;
}

//codigo para el ejercicio en especifico
void datos(Arbol a, int *der, int *izq){
    if(a->der != NULL){
        (*der)++;
        datos(a->der, der, izq);
    }
    if(a->izq != NULL){
        (*izq)++;
        datos(a->izq, der, izq);
    }
}

int profudidad(Arbol a){
    int izq=0, der=0;
    datos(a, &der, &izq);
    
    if(izq > der){
        return izq;
    }else{
        return der;
    }
    return 0;
}

void nodoData(Arbol a, int *suma, int *acum){
    if(a != NULL){
        (*acum)++;
        (*suma)+= a->info;
        nodoData(a->izq, suma, acum);
        nodoData(a->der, suma, acum);
    }
}

void altura(Arbol a){
	cout << "La altura del arbol es: " << profudidad(a) << endl;
}
//contar nodos
void cantnodos(Arbol a){
	int nodos=0;
    int suma=0;
    nodoData(a, &suma, &nodos);
	cout<<"La cantidad de nodos es: "<<nodos<<endl;

}
//sumar nodos
void sumnodos(Arbol a){
    int suma=0;
	int nodos=0;
    nodoData(a, &suma, &nodos);
    cout<<"La suma de los nodos del arbol es: "<<suma<<endl;
}

int main(){
    int variable=0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin>>variable;
    
    Arbol arbol=crearArbol(variable);
        do{
        int opcion = 0;
        cout<<"Menu: \n\t1) Agregar\n\t2) Recorrer"
        <<"\n\t3) Mostrar cantidad de niveles del arbol"
        <<"\n\t4) Mostrar cantidad de nodos del arbol"
        <<"\n\t5) Mostrar la suma de los nodos del arbol"
        <<"\n\t6) Salir\n\tOpcion elegida: ";
        cin>>opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
                break;
            case 2: recorrerArbol(arbol);
                break;
            case 3: cout<<"La cantidad de niveles /profundidad/ del arbol es: "<<profudidad(arbol)<<endl;
                break;
            case 4: cantnodos(arbol);
    			break;
    		case 5: sumnodos(arbol);
    			break;
            case 6: return 0;
                break;
            default: cout<<"Opcion erronea!"<<endl;
                break;
        }
    }while(true);
    
    return 0;
}
