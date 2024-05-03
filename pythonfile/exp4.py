'''
num = int(input("Enter a number: "))
factorial = 1
for i in range(1, num + 1):
    factorial *= i
print("The factorial of", num, "is", factorial)



num = int(input("Enter a number: "))
sum_of_cubes = 0
original_num = num
while num > 0:
    digit = num % 10
    sum_of_cubes += digit ** 3
    num //= 10
if sum_of_cubes == original_num:
    print(original_num, "is an Armstrong number.")
else:
    print(original_num, "is not an Armstrong number.")

    

n = int(input("Enter the nth num: "))
a, b = 0, 1
print(a)
print(b)
for i in range(2, n):
    c = a + b
    print(c)
    a, b = b, c

    

num = int(input("Enter a number: "))
if num > 1:
    for i in range(2, num):
        if (num % i) == 0:
            print(num, "is not a prime number")
            break
    else:
        print(num, "is a prime number")
else:
    print(num, "is not a prime number")

    

num = int(input("Enter a number: "))
num_str = str(num)
reversed_num = ""
for i in range(len(num_str)):
    reversed_num += num_str[len(num_str) - 1 - i]
if num_str == reversed_num:
    print(num, "is a palindrome")
else:
    print(num, "is not a palindrome")

num = int(input("Enter a number: "))
sum_of_digits = 0
for digit in str(num):
    sum_of_digits += int(digit)
print("The sum of digits of", num, "is", sum_of_digits)



count, sum_of_numbers = 0, 0
for i in range(1, 101):
    if i % 5 == 0 or i % 7 == 0:
        count += 1
        sum_of_numbers += i
        print(i)
print("\nTotal numbers: ", count)
print("Sum of numbers: ", sum_of_numbers)

string = input("Enter a string: ")
uppercase_string = string.upper()
print("The resulting string is:", uppercase_string)



for num in range(2, 101):
    is_prime = True
    for i in range(2, num):
        if num % i == 0:
            is_prime = False
            break
    if is_prime:
        print(num)

        

num = int(input("Enter a number: "))
for i in range(1, 11):
    print(num, "*", i, "=", num * i)
'''