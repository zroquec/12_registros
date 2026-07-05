#include <iostream>
#include <string>
using namespace std;

struct Producto{
    string nombre;
    float precio;
};

struct Venta{
    int idVenta;
    string producto;
    int cantidad;
    float precioTotal;
};

int main(){
    Producto P[100];
    Venta V[100];
    char opcion;
    int i=0,numventas=0;

    do{
        system("cls");
        cout<<"================================================================"<<endl;
        cout<<"                       MENU DE OPCIONES                         "<<endl;
        cout<<"================================================================"<<endl;
        cout<<"A: Registrar un nuevo producto."<<endl;
        cout<<"B: Listar los productos registrados."<<endl;
        cout<<"C: Buscar un producto por nombre."<<endl;
        cout<<"D: Actualizar los datos de un producto."<<endl;
        cout<<"E: Eliminar un producto."<<endl;
        cout<<"F: Registrar una venta."<<endl;
        cout<<"G: Listar las ventas realizadas"<<endl;
        cout<<"H: Calcular el total de ventas realizadas."<<endl;
        cout<<"S: Salir del programa."<<endl;
        cout<<"================================================================"<<endl;
        cout<<"\nElija una opcion: ";
        cin>>opcion;
        cin.ignore();

        if (opcion != 'S'){
            switch(opcion){
                case 'A':
                if(i>=100){
                    cout<<"Se alcanzo el limite maximo de productos (100)."<<endl;
                break;
                }
                else{
                    cout<<"\n================================================================"<<endl;
                    cout<<"                         PRODUCTO "<<i+1<<endl;
                    cout<<"================================================================"<<endl;
                    cout<<"| Nombre del producto: ";
                    getline(cin, P[i].nombre);
                    cout<<"| Precio: ";
                    cin>>P[i].precio;
                    cin.ignore();
                    cout<<"================================================================"<<endl;
                }
                i++;
                system("pause");
                break;

                case 'B':
                cout<<"================================================================"<<endl;
                cout<<"                         PRODUCTOS REGISTRADOS                  "<<endl;
                cout<<"================================================================"<<endl;
                for (int f=0; f<i; f++){
                    cout<<"Producto "<<f+1<<endl;
                    cout<<"| Nombre: "<<P[f].nombre<<endl;
                    cout<<"| Precio: "<<P[f].precio<<endl;
                    cout<<"----------------------------------------------------------------"<<endl;
                }
                system("pause");
                break;
                
                case 'C': {
                    int f=0;
                    string nombre_buscar;
                    cout<<"Escriba el nombre del producto que desea buscar: ";
                    getline(cin, nombre_buscar);

                    bool encontrado=false;

                    if(i==0){
                        cout<<"No hay productos registrados todavia."<<endl;
                    }
                    else{
                        while(f<i && !encontrado){
                            if(nombre_buscar==P[f].nombre){
                                cout<<"================================================================"<<endl;
                                cout<<"                         PRODUCTO ENCONTRADO                    "<<endl;
                                cout<<"================================================================"<<endl;
                                cout<<"Producto "<<f+1<<endl;
                                cout<<"| Nombre: "<<P[f].nombre<<endl;
                                cout<<"| Precio: "<<P[f].precio<<endl;
                                cout<<"----------------------------------------------------------------"<<endl;
                                encontrado=true;
                            }
                            f++;
                        }
                        if(!encontrado) cout<<"\nNo se encontro ningun producto con ese nombre."<<endl;
                    }
                    system("pause");
                break;
                }

                case 'D':
                int nume;
                cout<<"\nElija el Nro de producto que desea modificar: ";
                cin>>nume;
                cin.ignore();
                
                if(nume>0 && nume<=i){
                    cout<<"\nVuelva a escribir los datos de ese producto";
                    cout<<"\n================================================================"<<endl;
                    cout<<"                       PRODUCTO "<<nume<<endl;
                    cout<<"================================================================"<<endl;
                    nume--;
                    cout<<"| Nombre: ";
                    getline(cin, P[nume].nombre);
                    cout<<"| Precio: ";
                    cin>>P[nume].precio;
                    cin.ignore();
                    cout<<"================================================================"<<endl;
                }
                else cout<<"\nNumero invalido vuelva a intentarlo."<<endl;
                system("pause");
                break;

                case 'E':
                int eliminar;
                cout<<"\nElija el Nro de producto que desea eliminar (1 al "<<i<<"): ";
                cin>>eliminar;
                cin.ignore();
                eliminar--; 
                
                if(eliminar>=0 && eliminar<i) {
                    while (eliminar<i-1) {
                        P[eliminar]=P[eliminar+1];
                        eliminar++;
                    }
                    i--; 
                    cout<<"\n¡Producto eliminado con exito!"<<endl;
                } 
                else cout<<"Numero de producto no valido."<<endl;
                system("pause");
                break;
                
                case 'F':
                break;
                case 'G':
                break;
                case 'H':
                break;
            }
        }

    }while(opcion != 'S');
    return 0;
}