#include <iostream>
#include <string>
 
int main() {
    std::string command;
 
    std::cout << "Enter robot command: ";
    std::getline(std::cin, command);
 
    std::cout << "Command received: " << command << std::endl;
 
    // Further processing of the command can be implemented here
    return 0;
}