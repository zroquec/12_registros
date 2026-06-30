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
    int n,max=-1;
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
    bool encontrado = false;
    cout<<"\nIngrese el pais a buscar: ";
    getline(cin, pais);

    for(int i=0; i<n; i++){
        if(pais==A[i].pais){
            encontrado = true;

            cout<<"\nAtleta "<<i+1<<endl;
            cout<<"Nombre: "<<A[i].nombre<<endl;
            cout<<"Pais: "<<A[i].pais<<endl;
            cout<<"Disciplina: "<<A[i].disciplina<<endl;
            cout<<"Nro de medallas: "<<A[i].medalla<<endl;

            if(max<A[i].medalla){
                max=A[i].medalla;
                cont=i;
            }
        }
    }
    if(encontrado){
        cout<<"\nAtleta con mayor numero de medallas\n";
        cout<<"Nombre: "<<A[cont].nombre<<endl;
        cout<<"Pais: "<<A[cont].pais<<endl;
        cout<<"Disciplina: "<<A[cont].disciplina<<endl;
        cout<<"Nro de medallas: "<<A[cont].medalla<<endl;
    }
    else{
        cout<<"\nNo se encontraron atletas de ese pais."<<endl;
    }
    return 0;
}