#include<bits/stdc++.h>
using namespace std;

class test{
public:
	test(){}
private:
	~test(){}
};

int main(){
	test *t = new test();
	delete t;
	return 0;
}

// #include <iostream>
// class a {
//     ~a() {}
//     friend void delete_a(a* p);
// };


// void delete_a(a* p)  {
//     delete p;
// }

// int main()
// {
//     a *p = new a;
//     delete_a(p);

//     return 0;
// }