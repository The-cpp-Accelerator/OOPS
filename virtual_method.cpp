#include<bits/stdc++.h>
using namespace std;

class Base{
public:
	virtual void Test(){
		cout << "Base Called\n";
	}
};

class Derived1 : public Base{
public:
	void Test(){
		cout << "Derived1 Called\n";
	}
};

class Derived2 : public Derived1{
public:
	void Test(){
		cout << "Derived2 Called\n";
	}
};

int main(){
	Base *B1 = new Base();
	Base *B2 = new Derived1();
	Base *B3 = new Derived2();

	B1->Test();
	B2->Test();
	B3->Test();
	return 0;
}