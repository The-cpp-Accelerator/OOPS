#include<bits/stdc++.h>
using namespace std;

// Function with a default argument as a constant reference to a map
void printMap(const std::map<std::string, int> &m = std::map<std::string, int>()) {
    for (const auto &pair : m) {
        std::cout << pair.first << ": " << pair.second << std::endl;

        // throws error
       // m[pair.first] = 2;
    }
}

//Ques --> define a function with default map parameter by reference and can be updated inside

int main() {
    // Create a map
    std::map<std::string, int> myMap = {{"a", 1}, {"b", 2}, {"c", 3}};

    // Call function with the map
    printMap(myMap);

    // Call function without specifying the map, using the default argument
    printMap();

    cout << "run successfully\n";
    return 0;
}
