#include<bits/stdc++.h>
using namespace std;

class Animal { 
public:
    virtual ~Animal() {} // Ensure RTTI 
};

class Dog : public Animal {};

int main(){
    Animal* animal = new Dog(); 
    Dog* my_dog = dynamic_cast<Dog*>(animal); // Successful if 'animal' points to a Dog object
}