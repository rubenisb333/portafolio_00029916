#include<iostream>
using namespace std;

int dec2base(int n, int base);

int main(void) {
   int num,base;
   cout <<"Introduce un numero entero en base 10: "<<endl;
   cin >>num;cout <<endl;
   cout <<"Introduce la base a la que deseas convertir el numero:"<<endl;
   cin >>base;
   cout <<endl<<"El numero "<<num<<" en base 10 equivale al numero "<<
   dec2base(num,base)<<" en base "<<base<<"."<<endl<<endl;
   system("pause");
}

int dec2base(int n, int base) {
   int n_base=0, coef=1;
   while (n!=0) {
      n_base+=coef*(n%base);
      coef*=10;
      n/=base;
   }
   return n_base;
}
