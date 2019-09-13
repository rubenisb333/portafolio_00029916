//Ejercicio 8 conteo  6/09/2019
#include <iostream>

using namespace std;
void CountUp(int num, int con);

int main(void){	
   int num = 0;
   
   cout<<"Ingrese un numero: ";
   cin>> num;
   
   CountUp(num, 0);
   
   return 0;
}
void CountUp(int num, int con){
    
    con++;
    if(num==con)
    {
        cout<<con<<endl;
    }
    else
    {
        cout<<con<<endl;
        CountUp(num,con);
        cout<<con<<endl;
    }
}
