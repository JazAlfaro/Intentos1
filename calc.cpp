#include <iostream>
#include <vector>

using namespace std;

int modulo(int a,int m){
	int q=a/m;
	int r=a-q*m;
	if(r<0)
		r+=m;
	return r;
}

int suma(int a,int b, int mod){
	int c = a+b;
	return modulo(c,mod);
}
int resta(int a, int b,int mod){
	int c = a-b;
	return modulo(c,mod);
}

int multiplicacion(int a, int b,int mod){
	int c = a*b;
	return modulo(c,mod);
}

int inverso(int a, int mod){
	vector<int> ps;
	ps.push_back(0);
	ps.push_back(1);
	vector<int> qs;
	vector<int> rs;
	int r = 1;
	while(r!=0){
		int q = a/mod;
		r = modulo(a,mod);
		//cout<< a<<" =  "<< mod<<" * "<<q <<" + "<<r<<endl;
		a = mod;
		mod = r;
		qs.push_back(q);
		rs.push_back(r);
		
	}
	for(int i=0;i<qs.size();i++){
		cout<<qs[i]<< "   "<< rs[i]<<endl;
	}
	if(rs[rs.size()-2]){
		cout<<"Si tiene inverso";

		for(int i=0;i<qs.size();i++){
			cout<<"------"<<endl;
			cout<< ps[i]<<endl;
			cout<< qs[i]<<endl;
			cout<< ps[i+1]<<endl;
			
			
			int p = ps[i]-qs[i]*ps[i+1];
			
		//	cout<<p<<endl;
			//int pp = modulo(p,mod);
			//cout<<pp<<endl;
			//ps.push_back(pp);
			//ps.push_back(modulo(p,mod));
			
			//cout<<1<<endl;
		}
	}
	else
	   cout<<"NADA";
	
	for(int i=0;i<ps.size();i++){
		cout<<ps[i]<<endl;
	}
	
	
	
	
	
	
}

int main()
{/*
	char a;
	int b;
	int c;
	int mod;
	cout << "Ingrese el modulo a trabajar: " << endl;
	cin >> mod;
	cout << "Ingrese el primer numero a operar: "<<endl;
	cin >> b;
	cout << "Ingrese el segundo numero a operar: "<<endl;
	cin >> c;
	cout << "Ingrese un operador: " <<endl;
	cin >> a;
	if(a=='+')
	cout << "La respuesta es: " << modulo(suma(b,c),mod);
	if(a=='-')
		cout << "La respuesta es: " << modulo(resta(b,c),mod);
	if(a=='*')
		cout << "La respuesta es: " <<modulo(multiplicacion(b,c),mod);*/
	
	inverso(256,29);
	
	
	
	
	
	return 0;
}

