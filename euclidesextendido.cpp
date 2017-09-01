#include <iostream>
using namespace std;


int modulo(int a, int b){ 
	int r,c;
	c=a/b;
	r = a - (c*b);
	if (r<0)
		r += b;
	return r;
}

int euclides(int m, int n){
	int c = m/n;
	int r = modulo(m,n);
	cout<<m <<"=" <<n<<"*"<<c << "+"<< r<<endl;
	if(r==0)
		return n;
	else
		euclides(n,r);
}
int* Extendido(int a, int b){
	int u = 0;
	int v = 0;
	int respuesta[3];
	if(b==0){
		respuesta[0] = a;
		respuesta[1] = 1;
		respuesta[1] = 0;
	}
	else{
	int u0 = 1;
	int u1 = 0;
	int v0 = 0;
	int v1 = 1;
	int q = 0;
	int r = 0;
	//int modulo = euclides(m,n);
	while(b>0){
		q = a/b;
		r = a - b * q;
		u = u0 - q * u1;
		v = v0 - q * v1;
		/// Actualizamos los valores de a y b
		a = b;
		b = r;
		/// Actualizamos los valores para la siguiente iteracion
		u0 = u1;
		u1 = u;
		v0 = v1;
		v1 = v;
	}
	respuesta[0] = a;
	respuesta[1] = u0;
	respuesta[2] = v0;
	}
	return respuesta;
	
}
/*
int diofantica(int a, int b, int c){
	int d = euclides(a,b);
	if(c%d==0){
		e = c/d;
		return e;
	}
	else
	   cout<<"Termino el programa";	
	///Solucion Particular
	int x_0= e + 



}*/

int main() {
	int* p = Extendido(987,610);
	
	return 0;
}

