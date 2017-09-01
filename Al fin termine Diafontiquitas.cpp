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
	//cout<<m <<"=" <<n<<"*"<<c << "+"<< r<<endl;
	if(r==0)
		return n;
	else
		euclides(n,r);
}
void diofanticas(int a, int b, int c){
	int a1 = a, b1 = b, c1 = c;
	int mcd = euclides(a,b);
	int u = 0;
	int v = 0;
	int respuesta[3];
	int e;
	cout<<a<<"x "<<"+ "<<b<<"y"<<" = "<<c<<endl;
	cout<<endl;
	if(c%mcd==0){
		e = c/mcd;
		cout<<"El MCD es: "<< mcd <<endl;
		cout<<endl;
		cout<<c <<" es divisible entre "<<mcd<<endl;
		cout<<endl;
		cout<<"Sí tiene solución"<<endl;
		cout<<endl;
		
		if(b==0){
			respuesta[0] = a;
			respuesta[1] = 1;
			respuesta[2] = 0;
		}
		else{
			int u0 = 1;
			int u1 = 0;
			int v0 = 0;
			int v1 = 1;
			int q = 0;
			int r = 0;
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
		///FIN DE EUCLIDES EXTENDIDO
		
		cout<<"Con Euclides Extendido : "<<respuesta[1]<<"   "<<respuesta[2]<<endl;
		cout<<endl;
		cout<<" ( "<<a1<<" * "<<respuesta[1]<<" * "<<e <<" ) + (" <<b1 <<" * " <<respuesta[2]<<" * "<< e<<" )"<<endl;
		int i = respuesta[1]*e;
		int h = respuesta[2]*e;
		cout<<"Los valores son : "<< i<<"  "<<h<<endl;
		
		cout<<(a1*respuesta[1]*e)  + (b1 * respuesta[2]*e);
		

	}
	else
	   cout<<"No tiene solución"<<endl;
	
	
	///Euclides Extendido
	
	
}
int main() {
	int u,v,w;
	cout<<"Ingrese a: ";
	cin>> u;
	cout<<"Ingrese b: ";
	cin>> v;
	cout<<"Ingrese c: ";
	cin>> w;	
	cout<<endl;
	diofanticas(u,v,w);
	return 0;
}
