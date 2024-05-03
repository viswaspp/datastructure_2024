'''
number = int(input("Enter a number: "))

if number % 3 == 0 and number % 5 == 0:
    print(number, "is divisible by both 3 and 5.")
else:
    print(number, "is not divisible by both 3 and 5.")
'''
'''
number = int(input("Enter a number: "))

if number % 5 == 0:
    print(number, "is a multiple of 5.")
else:
    print(number, "is not a multiple of 5.")
'''
'''
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

if num1 > num2:
    print("The greatest number is:", num1)
elif num2 > num1:
    print("The greatest number is:", num2)
else:
    print("Numbers are equal")
'''
'''
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
num3 = float(input("Enter the third number: "))

if num1 > num2:
    if num1 > num3:
        print("The greatest number is:", num1)
    else:
        print("The greatest number is:", num3)
elif num2 > num3:
    print("The greatest number is:", num2)
else:
    print("The greatest number is:", num3)
'''
'''
a = float(input("Enter the coefficient of x^2 (a): "))
b = float(input("Enter the coefficient of x (b): "))
c = float(input("Enter the constant term (c): "))
discriminant = b**2 - 4*a*c
if discriminant > 0:
    print("The quadratic equation has real and distinct roots.")
elif discriminant == 0:
    print("The quadratic equation has real and repeated roots.")
else:
    print("The quadratic equation has imaginary roots.")
'''
'''
year = int(input("Enter a year: "))

if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print(year, "is a leap year.")
else:
    print(year, "is not a leap year.")
'''
'''
day = int(input("Enter the day: "))
month = int(input("Enter the month: "))
year = int(input("Enter the year: "))
# the number of days in each month
days_in_month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
# Check for leap year
if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    days_in_month[2] = 29
day += 1
# If the day exceeds the number of days in the month
if day > days_in_month[month]:
    day = 1
    month += 1
    # If the month exceeds December
    if month > 12:
        month = 1
        year += 1
# Output the next date
print("Next date: day={0} month={1} year={2}".format(day, month, year))
'''
'''
name = input("Enter student's name: ")
roll_number = input("Enter student's roll number: ")
sapid = input("Enter student's SAPID: ")
semester = input("Enter semester: ")
course = input("Enter course: ")

marks_pds = float(input("Enter marks obtained in PDS: "))
marks_python = float(input("Enter marks obtained in Python: "))
marks_chemistry = float(input("Enter marks obtained in Chemistry: "))
marks_english = float(input("Enter marks obtained in English: "))
marks_physics = float(input("Enter marks obtained in Physics: "))

# Calculate percentage
total_marks = 500  # Total marks for 5 subjects (100 each)
total_obtained_marks = marks_pds + marks_python + marks_chemistry + marks_english + marks_physics
percentage = (total_obtained_marks / total_marks) * 100

cgpa = percentage / 10

if cgpa >= 9.1:
    grade = 'O (Outstanding)'
elif cgpa >= 8.1:
    grade = 'A+'
elif cgpa >= 7.1:
    grade = 'A'
elif cgpa >= 6.1:
    grade = 'B+'
elif cgpa >= 5.1:
    grade = 'B'
elif cgpa >= 3.5:
    grade = 'C+'
else:
    grade = 'F'

# Print grade sheet
print("\nSample Gradesheet")
print("Name:", name)
print("Roll Number:", roll_number)
print("SAPID:", sapid)
print("Semester:", semester)
print("Course:", course)
print("Subject name: Marks")
print("PDS:", marks_pds)
print("Python:", marks_python)
print("Chemistry:", marks_chemistry)
print("English:", marks_english)
print("Physics:", marks_physics)
print("Percentage:", percentage, "%")
print("CGPA:", cgpa)
print("Grade:", grade)
'''