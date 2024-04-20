#include<bits/stdc++.h>
using namespace std;

struct cmp{
	bool operator()(char* const a, char* const b) const{
		return strcmp(a ,b) < 0;
	}
};

int main(){
	//StrCmp specified in map declaration
	map<const char *, int, cmp> strMap;

    cout << "run successfully\n";
	return 0;
}
