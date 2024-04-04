#include <iostream>

int main() {
    float length, breadth, area;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;
    area = length * breadth;
    std::cout << "Area of the rectangle: " << area << std::endl;
    return 0;
}