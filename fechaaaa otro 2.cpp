#include <iostream>
#include <math.h>
using namespace std;

class Date{
private:
	int day;
	int month;
	int year;
public:
	Date(int d, int m, int y){
		this->day = d;
		this->month = m;
		this->year = y;
	}
	
	bool isLeap(){
		if((year%4 == 0 && year%100 !=0)|| year%400==0)
			return true;
		else
			return false;
	}
	
	bool valiDate(){
		if(month==2){
			if(day<=29 && isLeap()==1)
				return true;
			else if(day<=28 && isLeap()==0)
				return true;
			else 
				return false;
		}
		
		if((month==4)||(month==6)||(month==9)||(month==11)){
			if(day<=30)
				return true;
			else 
				return false;
		}
		else{
			if(month<=12 && day<=31)
				return true;
			else
				return false;
		}
	}
	
	int hmdays(Date i, Date f){
		int dias[] ={31,28,31,30,31,30,31,31,30,31,30,31};
		if(i.valiDate()==1 && f.valiDate()==1){
			if(i.year == f.year){
			//int result = f.day;
			int result = f.day+1;
			//cout<<"RESULTADO: "<<result<<endl;
			result += dias[i.month-1]-i.day;
			for(int a=i.month;a<f.month-1;a++){
				result+=dias[a];}
				//cout<<"RESULTADO: "<<result<<"MES"<< a+1<<endl;
			if(i.isLeap()==1 && i.month<=2)
				result+=1;
			//cout<<"RESULTADO + m1: "<<dias[i.month-1]-i.day<<endl;
			return result;
			}
			
			if(i.year < f.year){
				int result = dias[i.month-1]-i.day;
				result+= f.day+1;
				//cout<<"RESULTADO: "<<result<<endl;
				for(int a=i.month;a<12;a++){
					result+=dias[a];
					//cout<<"RESULTADO: "<<result<<"MES"<<a+1<<endl;
				}
				
				for(int a=0;a<f.month-1;a++){
					result+=dias[a];
					//cout<<"RESULTADO: "<<result<<" MES "<<a+1<<endl;
				}
				///ARREGLAR BISIESTO
				/*
				for(int y = f.year; y>=i.year;y--){
					if((y%4 == 0 && y%100 !=0)|| y%400==0){
						if(f.month<2 || (f.month==2 && f.day<29))
							result +=0;
						if(i.month>2|| (i.month==2 && i.day<=29))
							result +=1;
						
						if(i.month<2 )
							result+=0;
					}
						/*if(f.month==2 ||i.month ==2){
							if(f.day==29 ||i.day==29 )
								result+1;
							else if(day<=28 && isLeap()==0)
								return true;
							else 
								return false;
						}
						result +=1;
					//else
				}
				*/
				int dif = f.year - i.year;
				if(dif>1){
					for(int i=1;i<dif;i++){
						result += 365;
						//cout<<result<<endl;
					}
				}
				
				return result;
			}
		}
		else
			cout<<" Fechas inválidas "<<endl;
		
	}
	
	void imprimir(Date a, Date b){
		int dias = hmdays(a,b);
		int horas = dias*24-1;
		cout<<"Numero de dias: "<<dias<<endl;
		cout<<"Numero de semanas: "<<floorf((dias/7.0)*100)/100<<endl;
		cout<<"Numero de meses: "<<floorf((dias/30.44)*100)/100<<endl;
		cout<<"Numero de anhos: "<<floorf((dias/365.99)*100)/100<<endl;
		cout<<"Cantidad de segundos: "<<horas*60*60<<endl;
		cout<<"Cantidad de minutos: "<<horas*60<<endl;
		cout<<"Cantidad de horas: "<<horas<<endl;
	}
	
};

int main(int argc, char *argv[]) {
	Date b(1,3,2012);
	//cout<<b.valiDate()<<endl;
	Date c(13,7,2019);
	//cout<<c.valiDate()<<endl;
	//cout<<b.hmdays(b,c);
	b.imprimir(b,c);
	
	return 0;
}

