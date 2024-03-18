#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    // Default constructor
    MyClass() : value(0) {
        std::cout << "Default constructor called for MyClass" << std::endl;
    }

    MyClass(int x)
    {
      value{x};
    }

    MyClass& operator=(const MyClass& other)
    {
     value=other.value ;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        value = other.value;
        std::cout << "Copy constructor called for MyClass" << std::endl;
    }
};

int main() {
    MyClass obj1; // Default constructor called
    std::cout << "obj1.value: " << obj1.value << std::endl;  // Output: obj1.value: 0

    MyClass obj2(10); // Default constructor (for obj2), then copy constructor (to copy obj2 to obj3)
    std::cout << "obj2.value: " << obj2.value << std::endl;  // Output: obj2.value: 10

    MyClass obj3 = obj2; // Copy constructor called (copying obj2 to obj3)
    std::cout << "obj3.value: " << obj3.value << std::endl;  // Output: obj3.value: 10

    return 0;
}
