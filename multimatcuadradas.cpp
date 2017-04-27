#include<iostream>

using namespace std;

int main(){
	int orden;
	cout<<"Matriz 1"<<endl;
	cout<<"Ingrese el numero de filas y columnas:";
	cin>> orden;

	int matriz1[orden][orden];
	int matriz2[orden][orden];
    int resultado[orden][orden];
    //pedir numeros para la primera matriz
	for(int i=0;i<orden;i++){
		for(int j=0;j<orden;j++){
			cout<<"Ingrese el digito ["<<i<<"]["<<j<<"]:";
			cin>>matriz1[i][j];
		}
	}
    //pedir numeros para la segunda matriz
    cout<<"Matriz 2"<<endl;
	for(int i=0;i<orden;i++){
		for(int j=0;j<orden;j++){
			cout<<"Ingrese el digito ["<<i<<"]["<<j<<"]:";cin>>matriz2[i][j];
		}
	}
    //multiplicacion
	for(int i=0;i<orden;i++){
		for(int j=0;j<orden;j++){
			int suma = 0;
			for(int k=0;k<orden;k++)
				suma += matriz1[i][k] * matriz2[k][j];
			resultado[i][j] = suma;
		}
	}
    //imprimir matriz resultado
    for(int f=0;f<orden;f++){
        for(int c=0;c<orden;c++){
            cout << resultado[f][c];
        }
        }
	return 0;
}
