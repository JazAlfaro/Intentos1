#include <iostream>
#include <vector>
using namespace std;


int aee(int a, int b){
	vector<int> x;
	vector<int> y;
	vector<int> r;
	vector<int> q;
	r.push_back(a);
	r.push_back(b);
	x.push_back(1);
	x.push_back(0);
	y.push_back(0);
	y.push_back(1);
	
	int d; 
	for(int i=0;d!=0;i++){
		int c = r[i]/r[i+1];
		q.push_back(c);
		d =r[i]%r[i+1];
		if(d!=0)
			r.push_back(d);
		int e = x[i]-(q[i+1]*x[i+1]);
		x.push_back(e);
		int f = y[i]-(q[i+1]*y[i+1]);
		y.push_back(f);
	}
	
	int t = r.size()-1;

	cout<<"MCD:  "<<r[t]<<endl;
	cout<<"X:  "<<x[t]<<endl;
	cout<<"Y:  "<<y[t]<<endl;
	
	
	
	/*
	cout<< "RESIDUO"<<endl;
	for(int i=0;i<r.size();i++){
		cout<<r[i]<<endl;
	}
	cout<<endl;
	
	cout<< "COCIENTE"<<endl;
	for(int i=0;i<q.size();i++){
		cout<<q[i]<<endl;
	}
	cout<<endl;
	
	cout<< "X"<<endl;
	for(int i=0;i<x.size();i++){
		cout<<x[i]<<endl;
	}
	cout<<endl;
	
	cout<< "Y"<<endl;
	for(int i=0;i<y.size();i++){
		cout<<y[i]<<endl;
	}
	cout<<endl;
	*/
	
}



int main() {
	aee(672,38);
	
	
	return 0;
}

