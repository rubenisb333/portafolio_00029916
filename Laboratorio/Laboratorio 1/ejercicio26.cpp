#include <iostream>
#include <conio.h>

using namespace std;

struct complex{
    string real;
    string imaginaria;
};

int main(){
   struct complex variable;
   
   cout<<"\nConjugado de un numero complejo con signo"<<endl;
   cout<<endl;
   cout<<endl;
   
   cout <<"parte real: " ; 
   cin >> variable.real;
   cout <<"parte imaginaria j : " ; 
   cin >> variable.imaginaria;
   
  if(variable.imaginaria[0] == '+'){
  variable.imaginaria[0]='-';
  }
  else{
  variable.imaginaria[0]='+';
  }
    cout<<"el cojudao es: " <<variable.real<<""<<variable.imaginaria<<"j";
   
    getch ();
    return 0;
}
