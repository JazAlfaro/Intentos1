
#ifndef VECTOR_H
#define VECTOR_H
#include "point.h"


class Vector
{
    public:
        Point inicio,fin;
        void imprimir();
        double distancia();
        void origen();
        void modificarI(double i);
        void modificarF(double i);
        void modificarIF(double i, double j);
};

#endif // VECTOR_H

