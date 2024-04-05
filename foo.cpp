#include<bits/stdc++.h>
using namespace std;

// class Test {};
// void foo(Test& t, int v){ cout << v << endl;} // func1
// void foo(Test&& t, int v){ cout << v << endl;
// 	cout << &t << endl;
// } // func2

// Test t;
// #define tmp (cout << &t << endl)
// Test getTest() {
// 	Test t;
// 	cout << &t << endl;
// 	return t;
// }

// void foo(string&& s){
// 	cout << &s << endl;
// }

// void foo(int* a){
// 	*a = 3;
// 	delete a;
// 	a = nullptr;
// }

void test(int &&p){

}



int main() {
	int x = 5;
	test(7);

	// move converts lvalue to rvalue
	test(std::move(x));

	//Test t;
	// tmp;
	// foo(t, 1); // case 1
	// foo(getTest(), 2); // case 2
	// foo("Nishant");
	// int* x = new int(4);
	// foo(x);
	//cout << *x << endl;
}