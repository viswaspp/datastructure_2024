'''
x = 9
y = 7


addition_result = x + y
multiplication_result = x * y
division_result = x / y
subtraction_result = x - y


print("Addition Result:", addition_result)
print("Multiplication Result:", multiplication_result)
print("Division Result:", division_result)
print("Subtraction Result:", subtraction_result)
'''
'''
radius = float(input("Enter the radius of the circle: "))
area = 3.14 * radius**2
print("The area of the circle with radius", radius, "is:", area)
'''
'''
x = 4
y = 3
result = (x + y) * (x + y)
print("The result of (x + y) * (x + y) with x =", x, "and y =", y, "is:", result)
'''
'''
a = float(input("Enter the length of side 'a': "))
b = float(input("Enter the length of side 'b': "))
c = (a**2 + b**2)**0.5
print("The length of the hypotenuse (c) is:", c)
'''
'''
principal_amount = float(input("Enter the principal amount: "))
rate_of_interest = float(input("Enter the rate of interest (in percentage): "))
time_in_years = float(input("Enter the time in years: "))
simple_interest = (principal_amount * rate_of_interest * time_in_years) / 100
print("The simple interest is:", simple_interest)
'''
'''
a = float(input("Enter the length of side 'a': "))
b = float(input("Enter the length of side 'b': "))
c = float(input("Enter the length of side 'c': "))
s = (a + b + c) / 2
area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
print("The area of the triangle is:", area)
'''
'''
total_seconds = int(input("Enter the number of seconds: "))
hours = total_seconds // 3600
minutes = (total_seconds % 3600) // 60
remaining_seconds = total_seconds % 60
print("Hours:", hours)
print("Minutes:", minutes)
print("Remaining Seconds:", remaining_seconds)
'''
'''
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

print(f"Before swapping: a = {a}, b = {b}")

a = a + b
b = a - b
a = a - b

print(f"After swapping: a = {a}, b = {b}")
'''
'''
n = int(input("Enter the value of n: "))
sum_of_natural_numbers = (n * (n + 1)) // 2

print(f"The sum of the first {n} natural numbers is: {sum_of_natural_numbers}")
'''
'''
def shift_values(number, shifts):

    left_shift_result = number << shifts
    right_shift_result = number >> shifts

    print(f"Original Number: {number}")
    print(f"Left Shift by {shifts} positions: {left_shift_result}")
    print(f"Right Shift by {shifts} positions: {right_shift_result}")

number = int(input("Enter the number: "))
shifts = int(input("Enter the number of positions to shift: "))
shift_values(number, shifts)
'''
'''
sequence = (10, 20, 56, 78, 89)

number_to_check = int(input("Enter a number to check in the sequence: "))

if number_to_check in sequence:
    print(f"{number_to_check} is in the sequence.")
else:
    print(f"{number_to_check} is not in the sequence.")
'''
'''
string_input = input("Enter a string: ")
character_to_check = input("Enter a character to check in the string: ")

if character_to_check in string_input:
    print(f"{character_to_check} is in the string.")
else:
    print(f"{character_to_check} is not in the string.")
'''