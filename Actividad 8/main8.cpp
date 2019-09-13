#include <iostream>
using namespace std;

struct Cpila{
    int elementos[7]={1,2,3,4,5,6,7};
    int max;
};
typedef struct Cpila Pila;

void initialize(Pila *s){
    s->max = 6;
}

bool empty(Pila *s){
    return s->max < 0;
}

int pop(Pila *s, int e){
    int ultimo=0;
    if(s->max>= 0){
        e = s->elementos[s->max];
        (s->max)--;
        return e;
    }
}

int main() {
    Pila unaPila;
    int ultimo=0;
    initialize(&unaPila);

    if(empty(&unaPila)){
        cout << "Esta vacia" << endl;
    }
    else 
        cout << "No esta vacia" << endl;
   
  for(int i=0; i<=6;i++){
      int e=0;
      e= pop(&unaPila,i);
      if(i==6)
        cout<<"el ultimo es: "<<e<<endl;

  }
  if(empty(&unaPila))
        cout << "Esta vacia" << endl;
return 0;
}
