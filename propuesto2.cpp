#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    long long int DNI;
    int edad;
};

int main(){
    int n,sum=0,cont=0;
    float prom;
    Persona P[100];
    cout<<"Ingrese la cantidad de personas a registrar: ";
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        cout<<"\nPersona "<<i+1<<endl;
        cout<<"Nombres: ";
        getline(cin, P[i].nombre);
        cout<<"DNI: ";
        cin>>P[i].DNI;
        cout<<"Edad: ";
        cin>>P[i].edad;
        cin.ignore();
    }

    for (int i=0; i<n; i++){
        if(P[i].edad>50){
            cont++;
        }

        sum=sum+P[i].edad;
    }
    prom = (float)sum/n;
    
    cout<<"\nCantidad de personas mayores de 50 anios: "<<cont<<endl;
    cout<<"Promedio de edades: "<<prom<<endl;
    cout<<"\nLISTADO DE PERSONAS REGISTRADAS\n";
    for(int i=0; i<n; i++){
        cout<<"\nPersona "<<i+1<<endl;
        cout<<"Nombre: "<<P[i].nombre<<endl;
        cout<<"DNI: "<<P[i].DNI<<endl;
        cout<<"Edad "<<P[i].edad<<endl;
    }
    return 0;
}