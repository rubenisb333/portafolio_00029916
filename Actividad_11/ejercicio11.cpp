//ejercicio 11 cola circular

#include<stdlib.h>
#include<iostream>

using namespace std;
 
void visualizar(float cola[]){
               int i;
               for(i=0;i<3;i++){
               cout<<(cola[i]);
                                }
             }
int main(){
 float cola[3];
 int frente=0;
 int atras=0;
 int band=0;
 int opc;
 float dato;
 
do{
 
  cout<<"\n \n\nMenu Cola cicular: ";
  cout<<"\n 1.insertar:";
  cout<<"\n 2.Eliminar:";
  cout<<"\n 3.Visualizar:";
  cout<<"\n 4.Salir:";
  cout<<"\n Seleccione opcion:";
  cin>>opc;
 switch(opc)
 {
        case 1:
            if(frente==atras && band==1){
			cout<<"cola llena.....\n";
			}
			else{
            cout<<"\n Insertar un numero a una cola: ";
            cin>>dato;
            cola[atras]=dato;
            cout<<"dato insertado..."<<cola[atras];
            atras=(atras+1)%3;
            band=1;
            }
        
		break;
 
         case 2:
              if(frente==atras && band==0){
			  cout<<"\n cola vacia";
			  }
          else{
               dato=cola[frente];
                cout<<"dato eliminado: "<<dato;
               band=0;
               frente=(frente+1)%3;
               }
        break;
 
         case 3:
              visualizar(cola);
         
		 break;
         
 
 
}
}while(opc!=4);
 
 
 system("pause");
return 0;
}
