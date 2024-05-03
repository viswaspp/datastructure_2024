'''
counts = [[0, 0, 0, 0] for _ in range(4)]
n = int(input("Enter the number of values to scan: "))
for i in range(n):
    value = int(input(f"Enter value {i+1} in the range of 0-3: "))
    if 0 <= value <= 3:
        counts[value][value] += 1
    else:
        print("Invalid value. Please enter a value between 0 and 3, inclusive.")
for i in range(4):
    print(f"The value {i} has occurred {counts[i][i]} times.")

    

n = int(input("Enter the number of values to store: "))
values = ()
for i in range(n):
    value = float(input(f"Enter value {i+1}: "))
    values += (value,)
average = sum(values) / n
print(f"The average of the values is {average}.")



N = int(input("Enter the number of students: "))
scores = list(map(int, input(f"Enter {N} scores separated by space: ").split()))
if len(scores) != N:
    print("Invalid input. Please enter exactly", N, "scores.")
else:
    runner_up = sorted(set(scores))[-2]
    print("Runner-up score:", runner_up)

    

n = int(input("Enter the number of students: "))
students = {}
for i in range(n):
    name = input(f"Enter name {i+1}: ")
    city = input(f"Enter city {i+1}: ")
    students[name] = city
print("All names:")
for name in students:
    print(name)
print("All city names:")
cities = set(students.values())
for city in cities:
    print(city)
print("Student name and city of all students:")
for name, city in students.items():
    print(f"{name}: {city}")
print("Count of students in each city:")
counts = {}
for city in students.values():
    if city not in counts:
        counts[city] = 0
    counts[city] += 1
for city, count in counts.items():
    print(f"{city}: {count}")

    
    
n = int(input("Enter the number of movies: "))
movies = {}
for i in range(n):
    name = input(f"Enter movie name {i+1}: ")
    year = int(input(f"Enter release year {i+1}: "))
    director = input(f"Enter director name {i+1}: ")
    production_cost = float(input(f"Enter production cost {i+1}: "))
    collection = float(input(f"Enter collection {i+1}: "))
    movies[name] = {"year": year, "director": director, "production_cost": production_cost, "collection": collection}
print("All movie details:")
for movie, details in movies.items():
    print(f"{movie}: {details}")
print("Movies released before 2015:")
for movie, details in movies.items():
    if details["year"] < 2015:
        print(movie)
print("Movies that made a profit:")
for movie, details in movies.items():
    if details["collection"] > details["production_cost"]:
        print(movie)
director = input("Enter director name: ")
print(f"Movies directed by {director}:")
for movie, details in movies.items():
    if details["director"] == director:
        print(movie)
'''