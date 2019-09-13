//Busqueda binario 
#include <iostream>
#include <cmath>
using namespace std;


int binario(int L[],int x, int primero, int ultimo)
{
  if (ultimo >= primero)  
    {
      int medio = (primero + ultimo) / 2;

      if (x == L[medio])
        return medio;
      else if (x < L[medio])
        return binario(L, x, primero, medio - 1);
      else 
        return binario(L, x, medio + 1, ultimo);
    }
  else
    return -1;
}

int main()
{
  int numeros[] = {1, 3, 4, 5, 17, 18, 31, 33 };

   int a = 0;
  int b = 8;
  int encontrar;
  
  cout << "Numero a buscar en la lista: " << endl;
  cin >> encontrar;

  int resultado = binario(numeros, encontrar, a, b);
  if ( resultado == -1 )
    {
      cout << "numero no esta en el arreglo" <<endl;
    }
  else
    {
      cout <<"El numero esta en la posicion: " << resultado + 1 << endl;
    }
  return 0;
}
