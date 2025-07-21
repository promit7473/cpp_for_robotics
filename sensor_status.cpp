#include <iostream>
 
// Global variable for sensor status
bool sensor_triggered = false;
 
void checkSensor() {
    // Simulate sensor being triggered
    sensor_triggered = true;

    //void function returns no value
    // This function checks the sensor status and updates the global variable
}
 
int main() {
    // std::cout << "Sensor initially triggered: " << (sensor_triggered ? "Yes" : "No") << std::endl;
    std::cout <<"sensor initially triggered: " << (sensor_triggered ? "Yes" : "No") << std::endl;
    checkSensor();
    std::cout << "Sensor status after checking: " << (sensor_triggered ? "Yes" : "No") << std::endl;
    return 0;
}