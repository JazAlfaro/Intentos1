#include<iostream>

#include "Cesar.h"
using namespace std;

int main() {
	Cesar a(3);
	string cifrado = a.cifrar("jazyrenuporsiempre");
	cout<<"Mensaje cifrado: "<<cifrado<<endl;
	cout<<endl;
	string descifrado = a.descifrar("mdbauhqxsruvlhpsuh");
	cout<<"Mensaje descifrado: "<<descifrado;
	
	//cout<<"Mensaje descifrado: ";
	return 0;
}

