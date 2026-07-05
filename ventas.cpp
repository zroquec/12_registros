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

        
    }while(opcion != 'S');
    return 0;
}