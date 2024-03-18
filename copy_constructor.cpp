#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    //operator=(const MyClass& other) = default;

    // Default constructor
    MyClass() : value(0) {
      std::cout << "Default constructor called for MyClass" << std::endl;
    }

    // default constructor
    MyClass(int x) : value(x) { cout << "int referenced constructor called\n"; }

    MyClass& operator++(int)
    {
      cout << "operator overloading called\n";
      value++;
      //return *this;
    }

    // Copy constructor
    // MyClass(const MyClass& other) {
    //   value = other.value;
    //   std::cout << "Copy constructor called for MyClass" << std::endl;
    // }
};

int main() {
    MyClass obj1; // Default constructor called
    std::cout << "obj1.value: " << obj1.value << std::endl;  // Output: obj1.value: 0

    MyClass obj2(10); // Default constructor (for obj2), then copy constructor (to copy obj2 to obj3)
    std::cout << "obj2.value: " << obj2.value << std::endl;  // Output: obj2.value: 10

    MyClass obj3(obj2); // Copy constructor called (copying obj2 to obj3)
    std::cout << "obj3.value: " << obj3.value << std::endl;  // Output: obj3.value: 10

    MyClass obj4(10);
    obj4++;
    cout << obj4.value << endl;

    return 0;
}

// conclusion
// 1. class obj1 = obj2 --> defualt copy constructor is called unless it is overriden.
// 2. class obj1; obj1 = obj2; --> operator "=" overloading is called.
// 3. ++(int) --> postfix 
// 4. ++() --> prefix
// 5. return statement is not required in operator overloading
// 6. what is difference between 1 & 2, why copy constructor is called in case 1 ?