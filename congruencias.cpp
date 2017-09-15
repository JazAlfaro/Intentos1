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

void congruencias(int a, int c,int b){
	int u = 0;
	int a1 = a;
	int c1 = c;
	int b1 = b;
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

	int p = respuesta[1] * a1;
	int q = respuesta[1] * c1;
	int modi = modulo(q,b1);
	cout<<"Multiplicando: "<<respuesta[1]<<" * "<<a1<<" = "<<p<<endl;
	cout<<endl;
	cout<<"Multiplicando: "<<respuesta[1]<<" * "<<c1<<" = "<<q<<endl;
	cout<<endl;
	cout<<"x = " <<q<<" = "<<modi<<" mod "<<b1<<endl;
	cout<<endl;
	cout<<"Solución: "<<modulo(modi*a1,b1)<<endl;
	cout<<endl;
	cout<<"Otras soluciones: "<<endl;
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<< modi+(b1*i)<<"  ";
	}
	cout<<endl;
	cout<<endl;
	for(int i=5;i>0;i--){
		cout<< modi-(b1*i)<<"  ";
	}

	
	
}

int main() {
	congruencias(3,4,7);
	
	return 0;
}
