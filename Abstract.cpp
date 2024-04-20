#include<bits/stdc++.h>
using namespace std;

//added by pk

class Interface {
public:
	// pure virtual function
	virtual void process() = 0;
};

class Impl : public Interface {
public :
	// 
	virtual void process() {
	}
} ;

void do_work ( Interface* obj) {
	obj->process();
}

// class Animal{
// public:
// 	int m;
// 	virtual void speak() = 0; 
// };

// class dog : public Animal{
// public:
// 	void speak(){
// 		cout << "Bark\n";
// 	}
// };

// class cat : public Animal{
// public:
// 	void speak(){
// 		cout << "meow\n";
// 	}
// };

int main(){
	//Animal A;
	// dog d;
	// d.speak();
	// latest function called from iobj object if any fuction defined in iobj 
	// is overriden in child class
	Interface* iobj = new Impl() ;
	do_work (iobj);
    cout << "run successfully\n";
	return 0;
}
