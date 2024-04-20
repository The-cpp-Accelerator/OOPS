#include<bits/stdc++.h>
using namespace std;

class Test {
	//int y, x;
	int x, y;
public:
	// No. In class Test, data members will initialize in order they are declared in
	// the class which is first y and then x. In the constructor when we first try to
	// initialize y, x is not initialized yet which may have garbage value causing
	// undefined behavior when the member y is used later in the program
	// execution.

	// left to right initialisation
	Test(int i) : x(i), y(x + 1) {
		cout << x << " " << y << endl;
	}

	Test(int i, int j){
		x = i + j;
		y = x + 1;
		cout << x << " " << y << endl;
	}
};

int main(){
	Test t(1);
    cout << "run successfully\n";
	return 0;
}
