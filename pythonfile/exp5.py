'''
s = input("Enter a string: ")
count = 0
for c in s:
    if c.isupper():
        count += 1
print("The number of capital letters is:", count)



s = input("Enter a string: ")
count = 0
vowels = "aeiouAEIOU"
for c in s:
    if c in vowels:
        count += 1
print("The total number of vowels is:", count)



s = input("Enter a sentence: ")
words = s.split()
for word in words:
    print(word)

    

mainstr = input("Enter the main string: ")
substr = input("Enter the substring: ")
count = 0
for i in range(len(mainstr)):
    if mainstr[i:i + len(substr)] == substr:
        count += 1
print("Number of occurrences:", count)



inputstr = input("Enter the string: ")
inputstr = inputstr.lower()
alphabet_count = {}
for char in inputstr:
    if char.isalpha():
        if char in alphabet_count:
            alphabet_count[char] += 1
        else:
            alphabet_count[char] = 1
for alphabet, count in alphabet_count.items():
    print(str(count) + alphabet.upper())
sentence = input("Enter a sentence: ")
words = sentence.split()
unique_words = set(words)
num_unique_words = len(unique_words)
print("Number of unique words:", num_unique_words)



n1 = int(input("Enter the number of fruits for set1: "))
s1 = set()
n2 = int(input("Enter the number of fruits for set2: "))
s2 = set()
print("Enter fruits for set s1:")
for i in range(n1):
    fruit = input()
    s1.add(fruit)
print("Enter fruits for set s2:")
for i in range(n2):
    fruit = input()
    s2.add(fruit)
common = s1.intersection(s2)
print("Fruits which are in both sets s1 and s2:", common)
unique = s1.difference(s2)
print("Fruits only in s1 but not in s2:", unique)
total = len(s1) + len(s2)
print("Count of all fruits from s1 and s2:", total)



S1 = {"Red", "Yellow", "Orange", "Blue"}
S2 = {"Violet", "Blue", "Purple"}
union_set = S1.union(S2)
print("Union of S1 and S2:", union_set)
intersection_set = S1.intersection(S2)
print("Intersection of S1 and S2:", intersection_set)
difference_set = S1.difference(S2)
print("Difference of S1 and S2:", difference_set)
symmetric_difference_set = S1.symmetric_difference(S2)
print("Symmetric Difference of S1 and S2:", symmetric_difference_set)
is_subset = S2.issubset(S1)
print("Is S2 a subset of S1:", is_subset)
is_superset = S1.issuperset(S2)
print("Is S1 a superset of S2:", is_superset)
'''