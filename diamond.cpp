#include<bits/stdc++.h>
using namespace std;

class A{
public:
	int l = 1, b = 2;
	virtual void Area(){
		cout << l * b << endl;
	}
};

class B : public A{
public:
	int l = 1, b = 2, h = 3;
	virtual void Area(){
		cout << l * b * h << endl;
	}	
};

class C : public A{
public:
	int l = 1, b = 2, h = 3;
	virtual void Area(){
		cout << l * b + h << endl;
	}	
};

class D : public B, public C{
public:
	int l = 1, b = 2, h = 3;
	D(){}
	// void Area(){
	// 	cout << l + b + h << endl;
	// }	
};


int main(){
	D d;

	// here its ambiguous to derive which Area for execution
	d.Area();
	return 0;
}