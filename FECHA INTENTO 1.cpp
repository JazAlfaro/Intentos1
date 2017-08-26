#include <iostream>
using namespace std;

bool isLeap(int year){
	if((year%4 == 0 && year%100 !=0)|| year%400==0)
		return true;
	else
		return false;
}

int validarFecha(int array[3]){
	if(isLeap(array[2])== 1){
		if(array[1]==2 && array[0]<=29)
			cout<<"FECHA VÁLIDA";
	}
	else 
		cout<<"NO";

}


int main() {
	
	string preguntas[] = {"Ingrese el dia: ", "Ingrese el mes: ","Ingrese el anho: "};
	int fecha1[3],fecha2[3];
	for(int i=0;i<3;i++){
		cout<<preguntas[i];
		cin>>fecha1[i];}
	for(int i=0;i<3;i++){
		cout<<preguntas[i];
		cin>>fecha2[i];}
	
	validarFecha(fecha1);
	validarFecha(fecha2);
	
	return 0;
}

