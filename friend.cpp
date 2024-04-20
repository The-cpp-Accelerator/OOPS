#include<bits/stdc++.h>
using namespace std;

// Nishant
class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    friend int calculateArea(Rectangle rect); // Declare friend function
};

// Friend function definition  
int calculateArea(Rectangle rect) {
    return rect.width * rect.height; // Accessing private members
}

int main() {
    Rectangle rect1(5, 3);
    std::cout << "Area: " << calculateArea(rect1) << std::endl;
    cout << "run successfully\n";
    return 0;
}
