#include <iostream>
#include <map>
#include <string>

// Function with a default argument as a constant reference to a map
void printMap(const std::map<std::string, int> &m = std::map<std::string, int>()) {
    for (const auto &pair : m) {
        std::cout << pair.first << ": " << pair.second << std::endl;
        m[pair.first] = 2;
    }
}

int main() {
    // Create a map
    std::map<std::string, int> myMap = {{"a", 1}, {"b", 2}, {"c", 3}};

    // Call function with the map
    printMap(myMap);

    // Call function without specifying the map, using the default argument
    printMap();

    return 0;
}
