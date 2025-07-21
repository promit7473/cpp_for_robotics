#include <iostream>
#include <sstream>
#include <string>
 
int main() {
    std::stringstream ss;
    int  motor_speed = 150;
    double battery_level = 12.5;
 
    // Using stringstream to create a diagnostic log entry
    ss << "Motor Speed: " <<  motor_speed << " RPM, Battery Level: " << battery_level << " Volts";
 
    // Converting stringstream to string for output
    std::string log_entry = ss.str();
    std::cout << "Log Entry: " << log_entry << std::endl;
 
    return 0;
}
