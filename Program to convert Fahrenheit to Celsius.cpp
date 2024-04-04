#include <iostream>
#include <iomanip>

int main() {
    float fahrenheit, celsius;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    std::cout << "Temperature in Celsius: " << std::fixed << std::setprecision(2) << celsius << "°C" << std::endl;