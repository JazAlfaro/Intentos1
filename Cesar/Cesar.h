#ifndef CESAR_H
#define CESAR_H
#include<iostream>
#include<string>
using namespace std;
class Cesar {
public:
	int clave;
	string alfabeto;
	string cifrar(string algo);
	string descifrar(string algo);
	Cesar(int clavecita);//sacar clavecitas
	//~Cesar();
	
};

#endif

