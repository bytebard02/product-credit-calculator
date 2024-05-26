#include <pybind11/pybind11.h>
#include <vector>
#include "include/data_struct.h"

// Implement sorting functions
void sortProducts(std::vector<Product>& products) {
    std::sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a.price < b.price;
    });
}

// Binding code
PYBIND11_MODULE(sorting, m) {
    m.def("sortProducts", &sortProducts, "A function which sorts products by price");
}

int main() {
    // Placeholder main function
    std::cout << "C++ Sorting Component Running" << std::endl;
    return 0;
}