#include <iostream>
using namespace std;

struct EMPLEADOS{
    int numero;
    string nombre;
    int ventas[12];
    float salario;
    int suma;
};

int main(){
    EMPLEADOS E[50];
    int n,max;
    cout<<"Ingrese la cantidad de empleados a registrar: ";
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        cout<<"\nEMPLEADO "<<i+1<<endl;
        cout<<"Nombre: ";
        getline(cin, E[i].nombre);
        cout<<"Nro de empleado: ";
        cin>>E[i].numero;
        cout<<"Salario del empleado: ";
        cin>>E[i].salario;
        for(int j=0; j<12; j++){
            cout<<"Nro de ventas "<<"mes "<<j+1<<": ";
            cin>>E[i].ventas[j];
        }
        cin.ignore();
    }

    for (int i=0; i<n ;i++){
        E[i].suma=0;
        for(int j=0; j<12; j++){
            E[i].suma=E[i].suma+E[i].ventas[j];
        }
    }

     max=E[1].suma;
    int numer=1;

    for (int i=1; i<n; i++){
        if(E[i].suma>max){
            max=E[i].suma;
            numer=i;
        }
    }
    cout<<"\nEMPLEADO CON MAYORES VENTAS"<<endl;
    cout<<"Empleado Nro "<<E[numer+1].numero<<endl;
    cout<<"Nombre: ";
    cout<<E[numer].nombre;

    for(int i=0; i<n; i++){
        if(E[i].suma>100){
            E[i].salario=1.1*E[i].salario;
        }
    }
}