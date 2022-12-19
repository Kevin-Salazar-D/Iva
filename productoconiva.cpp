#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    //DECLARRACION DE VARIABLES
    int iva,articulo,total;
    string nombreP;

    cout<<"Ingrese el nombre del producto ";
    cin>>nombreP;

    cout<<"Ingrese el precio del producto ";
    cin>>articulo;

    iva = articulo*0.16;

    total = articulo + iva;
    
    cout<<"El nombre del producto es: "<<nombreP << endl;
    cout<<"El precio sin iva es: "<<articulo << endl;
    cout<<"El iva del articulo es: "<<iva << endl;
    cout<<"El total a pagar es: "<<total << endl;

    system("pause");
    return 0;
    
    
}