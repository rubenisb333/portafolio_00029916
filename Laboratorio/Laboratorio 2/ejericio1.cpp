/*Dados dos números enteros llamados mayor y menor, obtener el máximo común divisor
(mcd) de ambos por el método de Euclides. 13/09/2019 */

#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
  

int mcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return mcd(b % a, a); 
} 
   
int main() 
{ 
    int a = 10, b = 15; 
    cout << "El maximo como un divisor de: (" << a << ", " 
         << b << ") es = " << mcd(a, b)  
                        << endl; 
    a = 35, b = 10; 
    cout << "El maximo como un divisor de: (" << a << ", " 
         << b << ") es = " << mcd(a, b)  
                        << endl; 
   
    return 0; 
} 
