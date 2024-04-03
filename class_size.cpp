#include<bits/stdc++.h>
using namespace std;

class Test{
public:
	char chr[5]; // -- 8
	int sz; // int -- 4
	int k; // int -- 4
	char ch; // char -- 4
};

// ((total member variable size  
// + max(size of member variable) - 1) / max(size of member variable)) 
// * max(size of member variable)

// ((9 + 4 - 1) / 4) * 4

int main(){
	cout << sizeof(Test) << endl;
	return 0;
}