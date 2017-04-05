#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<char> word;
	vector<char> palabra;
	//arreglar
	word.push_back('t');
	word.push_back('e');
	word.push_back('g');
	word.push_back('a');
	word.push_back('n');
	word.push_back('e');
	
	//completar espacios
	int a;
	int len = word.size();
	a = len%6+1;
	if((len-1)%6 != 0){
		for(int i=0;i<a;i++){
			word.push_back('_');
		}
	}

	char c;
	//primera fila:bien
	for (int pos = 0; (pos)%6 == 0 && pos<len;pos+=6){
		c = word[pos];
		palabra.push_back(c);
	}

	//segunda fila:bien
	int pos = 1;
	while(pos<len){
		if((pos)%3 == 0 ){
			pos+=2;
		}
		else if((pos+1)%2 == 0){ 
			int c = word[pos];
			palabra.push_back(c);
			pos+=2;
		}
		else{
			pos+=2;
		}
		
	}

	//tercera fila:bien
	int pos1 = 2;
	while(pos1<len){
		if(pos1%6 == 0 ){
			pos1+=2;
		}
		else if(pos1%2 == 0){ 
			int c = word[pos1];
			palabra.push_back(c);
			pos1+=2;
		}	
		
	}
	
	//cuarta fila:bien
	for (int pos = 3; pos<len; pos+=6){
		c = word[pos];
		palabra.push_back(c);
	}

	//imprimir vector
	for (int i=0;i<palabra.size();i++)
		cout << palabra[i];
	return 0;
}
