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
                
                case 'C':
                break;
                case 'D':
                break;
                case 'E':
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