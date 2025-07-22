#include <iostream>
#include <vector>
 
int main() {
    std::vector<int> numbers {1, 2, 3, 4, 5};
 
    // Traditional iterator type
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << "Traditional: " << *it << std::endl;
    }
 
    // Using auto keyword
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << "Auto: " << *it << std::endl;
    }
 
    return 0;
}