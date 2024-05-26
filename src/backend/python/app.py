import calculator
import sorting

# Test calculator
result = calculator.add(3, 4)
print(f"The result of adding 3 and 4 is: {result}")

# Test sorting
products = [{'id': 1, 'name': 'Product A', 'price': 10.0},
            {'id': 2, 'name': 'Product B', 'price': 5.0},
            {'id': 3, 'name': 'Product C', 'price': 15.0}]

sorting.sortProducts(products)
print(f"Sorted products: {products}")