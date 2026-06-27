#include <iostream>
using namespace std;

struct Empleado{
    string Nombre;
    string Sexo;
    float Sueldo;
};

int main(){
    int n,num1=0,num2=0;
    float max,min;
    Empleado E[100];
    cout<<"Ingrese la cantidad de trabajadores: ";
    cin>>n;
    cin.ignore();
    
    for(int i=0; i<n; i++){
        cout<<"\nEmpleado "<<i+1<<endl;
        cout<<"Nombre: ";
        getline(cin, E[i].Nombre);
        cout<<"Sexo: ";
        getline(cin, E[i].Sexo);
        cout<<"Sueldo: ";
        cin>>E[i].Sueldo;
        cin.ignore();
    }
    
}