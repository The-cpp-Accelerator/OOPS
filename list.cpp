#include<bits/stdc++.h>
using namespace std;

int main() {
    const int num_elements = 1000000;

    // Vector
    std::vector<int> my_vector(num_elements); 

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < num_elements; ++i) {
        // Do something with my_vector[i]
    } 
    auto end = std::chrono::high_resolution_clock::now();
    auto vector_time = std::chrono::duration<double>(end - start).count();

    // List
    std::list<int> my_list(num_elements); 

    start = std::chrono::high_resolution_clock::now();
    for (auto it = my_list.begin(); it != my_list.end(); ++it) {
        // Do something with *it
    }
    end = std::chrono::high_resolution_clock::now();
    auto list_time = std::chrono::duration<double>(end - start).count();

    //std::cout << my_list[50] << endl;
    std::cout << "Vector iteration time: " << vector_time << " seconds\n";
    std::cout << "List iteration time: " << list_time << " seconds\n";
    cout << "run successfully\n";
}
