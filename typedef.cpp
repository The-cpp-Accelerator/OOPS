#include<bits/stdc++.h>
using namespace std;

int x;
//typedef int f;


template<class T> 
void foo() {
	typename T::f * x;
	//f *x;
}

struct X {
	typedef int f;
};


int main() {
	foo<X>();
	//foo();
	return 0;
}