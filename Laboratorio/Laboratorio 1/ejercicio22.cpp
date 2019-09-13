#include <cstdlib>
#include<iostream>

using namespace std;

int main(int argc, char** argv) {

    int fila1[4][4];
    
    
    int n=5;
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 1: ";
        cin>>fila1[i][0];     
    }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 2: ";
        cin>>fila1[i][1];     
    }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 3: ";
        cin>>fila1[i][2];    
    }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 4: ";
        cin>>fila1[i][3];
   }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 5: ";
        cin>>fila1[i][4];    
    }
    cout << fila1[0][0] << " " << fila1[0][1] << " "<< fila1[0][2] << " "<< fila1[0][3] << " " << fila1[0][4]<<endl;
    cout << fila1[1][0] << " " << fila1[1][1] << " "<< fila1[1][2] << " "<< fila1[1][3] << " " << fila1[1][4]<<endl;
    cout << fila1[2][0] << " " << fila1[2][1] << " "<< fila1[2][2] << " "<< fila1[2][3] << " " << fila1[2][4]<<endl;
    cout << fila1[3][0] << " " << fila1[3][1] << " "<< fila1[3][2] << " "<< fila1[3][3] << " " << fila1[3][4]<<endl;
    cout << fila1[4][0] << " " << fila1[4][1] << " "<< fila1[4][2] << " "<< fila1[4][3] << " " << fila1[4][4]<<endl;
    return 0;
}

