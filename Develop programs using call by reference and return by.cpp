#include <iostream>

// Function overloading example
double add(double a, double b) {
    return a + b;
}

double add(int a, int b) {
    return static_cast<double>(a) + static_cast<double>(b);
}

double add(long double a, long double b) {
    return a + b;
}

// Call by reference example
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Return by reference example
inline double& square(double& x) {
    return x *= x;
}

// Default argument example
void print_result(double result = 0.0, bool show_message = true) {
    if (show_message) {
        std::cout << "Result: " << result << std::endl;
    }
}

// Constant argument example
void log_operation(const std::string& operation, double value) {
    std::cout << "Performing operation: " << operation << " on value: " << value << std::endl;
}

int main() {
    // Function overloading example
    std::cout << "Addition of double: " << add(2.5, 3.6) << std::endl;
    std::cout << "Addition of int: " << add(2, 3) << std::endl;
    std::cout << "Addition of long double: " << add(2.5L, 3.6L) << std::endl;

    // Call by reference example
    int num1 = 10, num2 = 20;
    std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swap(num1, num2);
    std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Return by reference example
    double x = 5.0;
    std::cout << "Before square: x = " << x << std::endl;
    x = square(x);
    std::cout << "After square: x = " << x << std::endl;

    // Default argument example
    print_result(); // Result: 0
    print_result(7.5); // Result: 7.5
    print_result(10.2, false);

    // Constant argument example
    log_operation("Multiplication", 5);
    log_operation("Division", 10.5);

    return 0;
}