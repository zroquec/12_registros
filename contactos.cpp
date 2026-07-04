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
                if(i==0){
                    cout<<"No hay contactos registrados."<<endl;
                }
                else{
                    for(int f=0; f<i ; f++){
                        cout<<"\n=================================================================================="<<endl;
                        cout<<"                              CONTACTO "<<f+1<<endl;
                        cout<<"----------------------------------------------------------------------------------"<<endl;
                        cout<<"| Nombre completo: "<<CE[f].nombre<<endl;
                        cout<<"| Sexo: "<<CE[f].sexo<<endl;
                        cout<<"| Edad: "<<CE[f].edad<<endl;
                        cout<<"| Email: "<<CE[f].email<<endl;
                        cout<<"==================================================================================\n"<<endl;
                    }
                }
                system("pause");
                break;

                case 4:
                if(i==0) {
                    cout<<"\nNo hay contactos registrados."<<endl;
                } 
                else {
                    string servidor_buscado;
                    bool encontrados=false;
                    
                    cout<<"\nIngrese el servidor a buscar (ej: gmail.com): ";
                    getline(cin, servidor_buscado);

                    cout<<"\n--- CONTACTOS ENCONTRADOS ---"<<endl;
            
                    for(int f=0; f<i; f++) {
                        string correo_actual=CE[f].email;
                        int posicion_arroba=-1;
                        int j=0;
                        while(correo_actual[j]!='\0') {
                            if(correo_actual[j]=='@') {
                                posicion_arroba=j;
                                break;
                            }
                            j++;
                        }

                        if(posicion_arroba!=-1) {
                            string servidor_contacto="";
                            
                            int k = posicion_arroba + 1;
                            while(correo_actual[k] != '\0') {
                                servidor_contacto += correo_actual[k];
                                k++;
                            }

                            if(servidor_contacto == servidor_buscado) {
                                cout<<"\n=================================================================================="<<endl;
                                cout<<"                           CONTACTO "<<f+1<<endl;
                                cout<<"----------------------------------------------------------------------------------"<<endl;
                                cout<<"| Nombre: "<<CE[f].nombre<<endl;
                                cout<<"| Sexo: "<<CE[f].sexo<<endl;
                                cout<<"| Edad: "<<CE[f].edad<<endl;
                                cout<<"| Email: "<<CE[f].email<<endl;
                                cout<<"==================================================================================\n"<<endl;
                                encontrados=true;
                            }
                        }
                    }
                     
                    if(!encontrados)  cout<<"No se encontraron contactos con ese servidor."<<endl;
                }
                system("pause");
                break;

                case 5:
                int eliminar;
                cout<<"\nElija el Nro de contacto que desea eliminar (1 al "<<i<<"): ";
                cin>>eliminar;
                cin.ignore();
                eliminar--; 
                
                if(eliminar>=0 && eliminar<i) {
                    
                    while (eliminar<i-1) {
                        CE[eliminar]=CE[eliminar+1];
                        eliminar++;
                    }
                    i--; 
                    cout<<"\n¡Contacto eliminado con exito!"<<endl;
                } 
                else cout<<"Numero de contacto no valido."<<endl;
                system("pause");
                break;
                
                case 6:
            
            }
        }    
    }while(n!=0);
    return 0;
}