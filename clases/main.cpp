#include<iostream>
#include "point.h"
#include "vector.h"
using namespace std;

int main(){
    /*
    Point a,b;
    a.x = 0.5;
    a.y = 1.1;
    b.x = 6.1;
    b.y = 2.5;
    cout<< "Punto a: ";
    a.print();
    cout<< "Punto b: ";
    b.print();
    */

    Vector vec1;
    vec1.inicio.x =1.9;
    vec1.inicio.y =0.5;
    vec1.fin.x =3.5;
    vec1.fin.y =2.8;
    vec1.imprimir();
    cout<<endl;
    cout<<"Distancia: "<<vec1.distancia()<<endl;
    cout<<endl;
    vec1.origen();
    vec1.imprimir();
    cout<<endl;
    cout<<"Coordenadas modificando el inicio: "<<endl;
    vec1.modificarI(4.1);
    vec1.imprimir();
    cout<<endl;
    cout<<"Coordenadas modificando el fin: "<<endl;
    vec1.modificarF(3.5);
    vec1.imprimir();
    cout<<endl;
    cout<<"Coordenadas modificando el inicio y el fin: "<<endl;
    vec1.modificarIF(1.2,2.7);
    vec1.imprimir();
    cout<<endl;




}
