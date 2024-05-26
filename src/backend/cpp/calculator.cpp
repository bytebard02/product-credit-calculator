#include <pybind11/pybind11.h>
#include "include/calculator.h"

// Implement calculation functions
int add(int a, int b) {
    return a + b;
}

// Binding code
PYBIND11_MODULE(calculator, m) {
    m.def("add", &add, "A function which adds two numbers");
}

int main() {
    // Placeholder main function
    std::cout << "C++ Calculator Component Running" << std::endl;
    return 0;
}