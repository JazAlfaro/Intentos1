#include<iostream>

#include "Cesar.h"
using namespace std;

int main() {
	Cesar a(3);
	cout<<"Mensaje cifrado: ";
	a.cifrar("jaz");
	cout<<endl;
	cout<<"Mensaje descifrado: ";
	a.descifrar("mdb");
	
	
	
	
	
	return 0;
}

