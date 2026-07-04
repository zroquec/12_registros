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
        system("cls");
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
                if(i>=100){
                    cout<<"Agenda llena, no se pueden agregar mas contactos."<<endl;
                break;
                }
                else{
                    cout<<"\n=================================================================================="<<endl;
                    cout<<"                             CONTACTO "<<i+1<<endl;
                    cout<<"=================================================================================="<<endl;
                    cout<<"Nombre completo: ";
                    getline(cin, CE[i].nombre);
                    cout<<"Sexo: ";
                    getline(cin, CE[i].sexo);
                    cout<<"Edad: ";
                    cin>>CE[i].edad;
                    cin.ignore();
                    cout<<"Email: ";
                    getline(cin, CE[i].email);
                    cout<<"=================================================================================="<<endl;
                }
                i++;
                system("pause");
                break;
                
                case 2:
                int nume;
                cout<<"\nElija el Nro de contacto que desea modificar: ";
                cin>>nume;
                cin.ignore();
                
                if(nume>0 && nume<=i){
                    cout<<"\nVuelva a escribir los datos de ese contacto";
                    cout<<"\n=================================================================================="<<endl;
                    cout<<"                               CONTACTO "<<nume<<endl;
                    cout<<"=================================================================================="<<endl;
                    nume--;
                    cout<<"Nombre completo: ";
                    getline(cin, CE[nume].nombre);
                    cout<<"Sexo: ";
                    getline(cin, CE[nume].sexo);
                    cout<<"Edad: ";
                    cin>>CE[nume].edad;
                    cin.ignore();
                    cout<<"Email: ";
                    getline(cin, CE[nume].email);
                    cout<<"=================================================================================="<<endl;
                }
                else cout<<"\nNumero invalido vuelva a intentarlo."<<endl;

                system("pause");
                break;
                
                case 3:
                case 4:
                case 5:
                case 6:
            
            }
        }    
    }while(n!=0);
    return 0;
}