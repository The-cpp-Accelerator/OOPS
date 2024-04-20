#include<bits/stdc++.h>
using namespace std;

class singleton{
public:
	static singleton &GetInstance(){
		static singleton Instance;
		cout << "Instance Created Successfully\n";
		return Instance;
	}
	int mSingle = 1;
	
private:
	// private constructor
	// prevents from creating instance from outside
	singleton(){};

	// prevents from copying instance
	singleton(const singleton&) = delete /*deafult*/;

	// prevents from assigning opertor
	singleton& operator = (const singleton&) = delete /*deafult*/;
};
//singleton ins = singleton::GetInstance();
int main(){
	//singleton s; --> give error
	singleton &ins = singleton::GetInstance();
    cout << ins.mSingle <<endl;
	cout << "run successfully\n";
    return 0;
}
