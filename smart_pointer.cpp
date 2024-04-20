#include<bits/stdc++.h>
using namespace std;

template <class T>
class Auto_ptr1
{
    T* m_ptr;
    //string s;
public:
    // Pass in a pointer to "own" via the constructor
    Auto_ptr1(T* ptr=nullptr):m_ptr(ptr)/*,s("Nishant")*/
    {
        // s = "Nishant"
        cout << "Auto_ptr1 Constructor Called\n";
    }

    // The destructor will make sure it gets deallocated
    ~Auto_ptr1()
    {
        cout << "Auto_ptr1 Destructor Called\n";
        delete m_ptr;
    }

    T some_member_function() { 
        return m_ptr;
    }

    // Overload dereference and operator-> so we can use Auto_ptr1 like m_ptr.
    T& operator*() const { return *m_ptr; }
    T* operator->() const { return m_ptr; }
};

// A sample class to prove the above works
class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
};

int main()
{
    Auto_ptr1<Resource> res(new Resource()); // Note the allocation of memory here

    // ... but no explicit delete needed

    // Also note that we use <Resource>, not <Resource*>
    // This is because we've defined m_ptr to have type T* (not T)

    //cout << (*res).some_member_function() << endl;
    cout << "run successfully\n";
    return 0;
} // res goes out of scope here, and destroys the allocated Resource for us
