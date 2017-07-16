#include <iostream>
#include <vector>
using namespace std;


void aee(long a, long b){
	vector<int> x;
	vector<int> y;
	vector<int> r;
	vector<int> q;
	r.push_back(a);
	r.push_back(b);
	q.push_back(0);
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
	
	cout<< "residuo     cociente     x     y"<<endl;
	cout<<endl;
	for(int i=0;i<r.size();i++){
		cout<<r[i]<<"    "<<q[i]<<"    "<<x[i]<<"    "<<y[i]<<endl;
	}
}
int main() {
	aee(1489,58);
	
	
	return 0;
}

