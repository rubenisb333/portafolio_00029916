//Ultima pila vacia jercicio anteriro 8 

#include <iostream>
#include <stack>
using namespace std;

float ultimo_vacio(stack<float> *s){
    int ultimo=0;
    while(true){
	if(s->empty()){
		ultimo = s->top();
		s->pop();
		return ultimo;
                break;
        }
    };   
}

int main()
{
    stack<float> s;
s.push(4.6);
s.push(5.3);
s.push(2.8);

	float ultimo = ultimo_vacio(&s);
       
	cout << "utimo: "<<ultimo;
        
}
