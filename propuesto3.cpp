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

    do{
        cin>>mes;
         if (mes!=0){
            for(int i=0; i<n; i++){
                if(mes==P[i].mes){
                    cout<<"\nPersona "<<i+1<<endl;
                    cout<<"Nombre: "<<P[i].nombre<<endl;
                    cout<<"Dia de nacimiento: "<<P[i].dia<<endl;
                    cout<<"Mes de nacimiento: "<<P[i].mes<<endl;
                    cout<<"Anio de nacimiento: "<<P[i].anio<<endl;
                }
            }
        }
    }while(mes!=0);
}