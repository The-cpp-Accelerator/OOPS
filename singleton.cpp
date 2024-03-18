#include<bits/stdc++.h>
using namespace std;

class singleton{
public:
	static singleton& GetInstance(){
		static singleton Instance;
		cout << "Instance Created Successfully\n";
		return Instance;
	}
private:
	// private constructor
	// prevents from creating instance from outside
	singleton(){};

	// prevents from copying instance
	singleton(const singleton&) = delete /*deafult*/;

	// prevents from assigning opertor
	singleton& operator = (const singleton&) = delete /*deafult*/;
};

int main(){
	singleton ins = singleton::GetInstance();
	return 0;
}