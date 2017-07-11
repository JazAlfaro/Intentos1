#ifndef CESAR_H
#define CESAR_H
#include<iostream>
#include<string>
using namespace std;
class Cesar {
public:
	int clave;
	string alfabeto;
	void cifrar(string algo);
	void descifrar(string algo);
	Cesar(int clavecita);//sacar clavecitas
	//~Cesar();
	
};

#endif

