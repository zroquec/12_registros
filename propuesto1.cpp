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
    max=E[0].Sueldo;
    min=E[0].Sueldo;

    for(int i=1; i<n; i++){
        if (max<E[i].Sueldo){
            max=E[i].Sueldo;
            num1=i;
        }

        if (min>E[i].Sueldo){
            min=E[i].Sueldo;
            num2=i;
        }
    }
    
    cout<<"\nEMPLEADO CON MAYOR SUELDO\n";
    cout<<"Empleado "<<num1+1<<endl;
    cout<<"Nombre: "<<E[num1].Nombre<<endl;
    cout<<"Sexo: "<<E[num1].Sexo<<endl;
    cout<<"Sueldo: "<<E[num1].Sueldo<<endl;

    cout<<"\nEMPLEADO CON MENOR SUELDO\n";
    cout<<"Empleado "<<num2+1<<endl;
    cout<<"Nombre: "<<E[num2].Nombre<<endl;
    cout<<"Sexo: "<<E[num2].Sexo<<endl;
    cout<<"Sueldo: "<<E[num2].Sueldo<<endl;
    return 0; 
}