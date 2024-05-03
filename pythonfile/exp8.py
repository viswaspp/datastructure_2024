'''
def process_names(file_name):
    with open(file_name) as file:
        names = [name.strip() for name in file]
    count_names = len(names)
    count_vowel_starting_names = sum(1 for name in names if name[0].lower() in 'aeiou')
    longest_name = max(names, key=len)
    return count_names, count_vowel_starting_names, longest_name
file_name = "names.txt"
with open(file_name, 'w') as file:
    file.write("John\nAlice\nBob\nEva\nOlivia\n")
count_names, count_vowel_starting_names, longest_name = process_names(file_name)
print("Number of names:", count_names)
print("Number of names starting with a vowel:", count_vowel_starting_names)
print("Longest name:", longest_name)



def process_numbers(file_name):
    with open(file_name) as file:
        numbers = [int(line.strip()) for line in file]
    max_number = max(numbers)
    average = sum(numbers) / len(numbers)
    count_greater_than_100 = sum(1 for num in numbers if num > 100)
    return max_number, average, count_greater_than_100
file_name = "numbers.txt"
# Writing integers to file (example)
with open(file_name, 'w') as file:
    file.write("78\n")
    file.write("125\n")
    file.write("99\n")
    file.write("102\n")
    file.write("150\n")
max_number, average, count_greater_than_100 = process_numbers(file_name)
print("Max number:", max_number)
print("Average of all numbers:", average)
print("Count of numbers greater than 100:", count_greater_than_100)



def read_city_details(file_name):
    cities = []
    total_area = 0
    with open(file_name) as file:
        for line in file:
            parts = line.strip().split()
            city_name = parts[0]
            population = float(parts[1])
            area = float(parts[2])
            cities.append((city_name, population, area))
            total_area += area
    return cities, total_area
def display_all_cities(cities):
    print("City Details:")
    for city in cities:
        print("Name:", city[0])
        print("Population:", city[1], "lakhs")
        print("Area:", city[2], "sq KM")
        print()
def display_population_above_10_lakhs(cities):
    print("Cities with population more than 10 lakhs:")
    for city in cities:
        if city[1] > 10:
            print(city[0])
def display_sum_of_areas(total_area):
    print("Sum of areas of all cities:", total_area, "sq KM")
file_name = "city.txt"
cities, total_area = read_city_details(file_name)
display_all_cities(cities)
print()
display_population_above_10_lakhs(cities)
print()
display_sum_of_areas(total_area)



def perform_integer_division(a, b):
    try:
        result = a // b
        print(result)
    except ZeroDivisionError:
        print("Error Code: integer division or modulo by zero")
    except ValueError:
        print("Error Code: invalid literal for int() with base 10:", b)

def main():
    try:
        N = int(input("Enter the number of test cases: "))
        for _ in range(N):
            a, b = input().split()
            a = int(a)
            b = int(b)
            perform_integer_division(a, b)
    except ValueError:
        print("Error: Input must be numeric.")

if __name__ == "__main__":
    main()



def process_file(file_name):
    try:
        with open(file_name, 'r') as file:
            lines = file.readlines()
    except FileNotFoundError:
        raise FileNotFoundError("File '{}' not found.".format(file_name))
    except PermissionError:
        raise PermissionError("Permission denied to open file '{}'.".format(file_name))
    except IsADirectoryError:
        raise IsADirectoryError("'{}' is a directory, not a file.".format(file_name))
    except OSError as e:
        raise OSError("Error occurred while opening '{}': {}".format(file_name, e))
    else:
        return lines

def main():
    file_name = input("Enter the name of the file to process: ")
    try:
        lines = process_file(file_name)
        print("File contents:")
        for line in lines:
            print(line.strip())
    except (FileNotFoundError, PermissionError, IsADirectoryError, OSError) as e:
        print("Error:", e)

if __name__ == "__main__":
    main()
'''
