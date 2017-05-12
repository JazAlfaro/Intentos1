
#include<iostream>
#include<math.h>
#include "Vector.h"


void Vector::imprimir(){
    cout << "Coordenadas de inicio: ";
    inicio.print();
    cout << "Coordenadas de fin: ";
    fin.print();
}
void Vector::origen(){
    inicio.x = 0.0;
    inicio.y = 0.0;
}

double Vector::distancia(){
    double d,a,b;
    a = fin.x-inicio.x;
    b = fin.y-inicio.y;
    d = sqrt(a*a+b*b);
    return d;
}

void Vector::modificarI(double i){
    inicio.x += i;
    inicio.y += i;
}

void Vector::modificarF(double i){
    fin.x += i;
    fin.y += i;
}

void Vector::modificarIF(double i, double j){
    inicio.x += i;
    inicio.y += i;
    fin.x += j;
    fin.y += j;

}
