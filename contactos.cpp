#include <iostream>
#include <string>
using namespace std;

struct ContactoEmail{
    string nombre;
    string sexo;
    int edad;
    string email;
};

int main(){
    ContactoEmail CE[100];
    int n,i=0;

    do{
        cout<<"=================================================================================="<<endl;
        cout<<"                          AGENDA DE CONTACTOS                                       "<<endl;
        cout<<"=================================================================================="<<endl;
        cout<<"1. Agregar un contacto"<<endl;
        cout<<"2. Modificar un contacto"<<endl;
        cout<<"3. Mostrar un listado general de contactos"<<endl;
        cout<<"4. Montrar un listado de contactos por servidor"<<endl;
        cout<<"5. Eliminar un contacto"<<endl;
        cout<<"6. Buscar un contacto por email"<<endl;
        cout<<"0. Salir del programa"<<endl;
        cout<<"=================================================================================="<<endl;
        cout<<"\nElija una opcion: ";
        cin>>n;
        cin.ignore();
        while(n<0 || n>6){
            cout<<"Error: numero invalido vuelva a intentarlo"<<endl;
            cout<<"\nElija una opcion: ";
            cin>>n;
            cin.ignore();
        }
        if(n!=0){
            switch(n){
                case 1:

                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
            
            }
        }    
    }while(n!=0);
    return 0;
}