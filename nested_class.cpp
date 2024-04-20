#include<bits/stdc++.h>
using namespace std;

class Out {
	int x;
public:
	//int x;
	class In {
		//int y;
	public:
		int y;
		In() {y=0;}
		int getxy(Out* op) { return op->x+y; } // line a
	};
	Out() {x=0;}
	int getxy(In* ip) { return x + ip->y; } // line b
};

int main() {
	Out o;
	Out::In i;
	i.getxy(&o);
	o.getxy(&i);
    cout << "run successfully\n";
    return 0;
}
