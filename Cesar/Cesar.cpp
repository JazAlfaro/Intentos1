#include "Cesar.h"

Cesar::Cesar(int clavecita) {
	this->alfabeto = "abcdefghijklmnopqrstuvwxyz";
	this->clave = clavecita;
}

void Cesar::cifrar(string algo){
	int tam = algo.size();
	string pls;
	for(int i=0;i<tam;i++){
		int pos = alfabeto.find(algo[i]);
		int pos1 = pos+clave;
		if( pos1 > 27)
			pos1 -=27; 
		pls[i] = alfabeto[pos1];
	}
	
	for(int i=0;i<tam;i++)
		cout<<pls[i];
}

void Cesar::descifrar(string algo){
	int tam = algo.size();
	string pls;
	for(int i=0;i<tam;i++){
		int pos = alfabeto.find(algo[i]);
		int pos1 = pos-clave;
		if( pos1 < 1)
			pos1 = 27 + pos1;
		pls[i] = alfabeto[pos1];
	}
	
	for(int i=0;i<tam;i++)
		cout<<pls[i];
}
