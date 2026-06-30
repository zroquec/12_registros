#include <iostream>
using namespace std;

struct Atleta{
    string nombre;
    string pais;
    string disciplina;
    int medalla;
};

int main(){
    Atleta A[1000];
    string pais;
    int n,max=0;
    cout<<"Ingrese la cantidad de atletas: ";
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        cout<<"\nAtleta "<<i+1<<endl;
        cout<<"Nombre: ";
        getline(cin, A[i].nombre);
        cout<<"Pais: ";
        getline(cin, A[i].pais);
        cout<<"Disciplina: ";
        getline(cin, A[i].disciplina);
        cout<<"Nro de medallas: ";
        cin>>A[i].medalla;
        cin.ignore();
    }
    int cont=0;
    cout<<"\nIngrese el pais a buscar: ";
    getline(cin, pais);

    for(int i=0; i<n; i++){
        if(pais==A[i].pais){
            
        }
    }
}