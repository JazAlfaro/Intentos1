#include <iostream>
using namespace std;


int modulo(int a, int b){ 
	int r,c;
	c=a/b;
	r = a - (c*b);
	if (r<0)
		r += b;
	return r;
}

int euclides(int m, int n){
	int c = m/n;
	int r = modulo(m,n);
	cout<<m <<"=" <<n<<"*"<<c << "+"<< r<<endl;
	if(r==0)
		return n;
	else
		euclides(n,r);
}


int main() {
	cout<<euclides(15,30);
	
	return 0;
}

