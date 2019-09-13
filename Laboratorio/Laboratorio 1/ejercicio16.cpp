#include <iostream>

using namespace std;

int main() {
    int sumatoria=0;
    int promedio=0;
    int n[10];
    
    for(int i=0;i<10;i++){
        cout<<i+1<<".Digite un numero entero: ";
        cin>>n[i]; 
		 sumatoria += n[i];   
    }
   
    promedio=sumatoria/10;
    
    cout<<"La sumatoria es: "<<sumatoria<<endl;
    cout<<"El promedio de los numeros es: "<<promedio<<endl;
    
    return 0;
}
