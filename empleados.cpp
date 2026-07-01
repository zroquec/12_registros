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

}