#include<bits/stdc++.h>
using namespace std;

// int main(){
// 	int *ptr1 = nullptr;
// 	int *ptr2 = NULL;

// 	int val = ptr1 == ptr2;
// 	cout << val << endl;
// 	cout << ptr1 << endl;
// 	cout << ptr2 << endl;

// 	return 0;
// }

void func(int x) {
    std::cout << "Integer argument\n";
}

void func(char* str) {
    std::cout << "Pointer argument\n";
}

int main() {
    func(nullptr); // Ambiguous: could call either overload
}
