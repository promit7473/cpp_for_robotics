#include <iostream>
 
int main() {
    // Basic arithmetic operations
    int motor_speed = 100;    // Base speed
    int speed_increment = 20; // Speed adjustment
 
    // Addition
    int increased_speed = motor_speed + speed_increment;
     
    // Subtraction
    int decreased_speed = motor_speed - speed_increment;
     
    // Multiplication
    int double_speed = motor_speed * 2;
     
    // Division
    int half_speed = motor_speed / 2;
     
    // Modulus (remainder)
    int remainder = motor_speed % 30;
 
    // Output results
    std::cout << "Original Speed: " << motor_speed << std::endl;
    std::cout << "Increased Speed: " << increased_speed << std::endl;
    std::cout << "Decreased Speed: " << decreased_speed << std::endl;
    std::cout << "Double Speed: " << double_speed << std::endl;
    std::cout << "Half Speed: " << half_speed << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;
 
    return 0;
}