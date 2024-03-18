#include<bits/stdc++.h>
using namespace std;

int main(){
	char str1[] = "Kumar";
	// address cannot be changed 
	char* const ch1 = str1;
	cout << ch1 << endl;
	// but character can be changed
	*ch1 = 'H';
	cout << ch1 << endl;

	char str2[] = "Nishant";
	char str3[] = "Nonahi";
	// address cannot be changed 
	const char* ch2 = str2;
	// *ch2 = 'H'; // not allowed
	cout << ch2 << endl;

	ch2 = str3;
	cout << ch2 << endl;
	return 0;
}