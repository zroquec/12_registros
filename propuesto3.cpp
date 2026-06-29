#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main(){
    Persona P[100];
    int mes;
    int n;
    cout<<"Ingrese la cantidad de personas a registrar: ";
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        cout<<"\nPersona "<<i+1<<endl;
        cout<<"Nombre: ";
        getline(cin, P[i].nombre);
        cout<<"Dia de nacimiento: ";
        cin>>P[i].dia;
        cout<<"Mes de nacimiento: ";
        cin>>P[i].mes;
        cout<<"Anio de nacimiento: ";
        cin>>P[i].anio;
        cin.ignore();
    }
}