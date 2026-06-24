#include <iostream>
#include <string>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    string editorial;
    int anioPublicacion;
};

int main(){
    int n;
    Libro libros[100];
    cout<<"Ingrese la cantidad de libros: ";
    cin>>n;
    cin.ignore();

    for (int i=0; i<n; i++){
        cout<<"\nLibro "<<i+1<<endl;
        cout<<"Titulo: ";
        getline(cin, libros[i].titulo);
        cout<<"Autor: ";
        getline(cin, libros[i].autor);
        cout<<"Editorial: ";
        getline(cin, libros[i].editorial);
    }


}