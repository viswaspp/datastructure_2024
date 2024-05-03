'''
def find_max_min(sequence):
    if not sequence:
        return None, None  # If the sequence is empty, return None for both max and min
    max_num = sequence[0]
    min_num = sequence[0]
    for num in sequence:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num
    return max_num, min_num
# Example usage:
numbers = [5, 3, 9, 2, 7, 1]
max_num, min_num = find_max_min(numbers)
print("Maximum number:", max_num)
print("Minimum number:", min_num)



def sum_of_cubes(n):
    if n <= 0:
        return 0  # If n is not a positive integer, return 0
    
    sum_cubes = 0
    for i in range(1, n):
        sum_cubes += i ** 3
    
    return sum_cubes
# Example usage:
number = 5
result = sum_of_cubes(number)
print("Sum of cubes of positive integers smaller than", number, "is:", result)



def print_numbers(n):
    if n >= 1:
        print_numbers(n - 1)  # Recursive call with n-1
        print(n)

# Example usage:
number = 5
print("Numbers from 1 to", number, "using recursion:")
print_numbers(number)



def fibonacci(n, a=0, b=1):
    if n <= 0:
        return
    print(a, end=" ")
    if n == 1:
        return
    fibonacci(n-1, b, a+b)
number_of_terms = 10
print("Fibonacci series up to", number_of_terms, "terms:")
fibonacci(number_of_terms)



cone_volume = lambda r, h: (1/3) * 3.14159 * r**2 * h
radius = 3
height = 5
print("Volume of cone with radius", radius, "and height", height, "is:", cone_volume(radius, height))



get_max_min = lambda lst: (max(lst), min(lst))

input_list = [10, 6, 8, 90, 12, 56]
result = get_max_min(input_list)
print("Max and Min from the list:", result)



# Keyword Argument
def greet(name, greeting):
    print(f"{greeting}, {name}!")
# Calling the function with keyword arguments
greet(greeting="Hello", name="John")
# Default Argument
def greet_default(name, greeting="Hello"):
    print(f"{greeting}, {name}!")
# Calling the function without specifying the greeting
greet_default("Bob")  # Output: Hello, Bob!
# Variable Length Argument
def sum_numbers(*args):
    total = 0
    for num in args:
        total += num
    return total
# Calling the function with variable length arguments
result = sum_numbers(1, 2, 3, 4, 5)
print("Sum:", result)  # Output: Sum: 15
'''

