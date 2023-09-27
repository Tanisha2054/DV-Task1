string = input("Enter a string: ")
vowel = 0
string = string.lower()
for char in string:
    
    if char in "aeiou":
        vowel += 1
print("Number of vowels in the string:", vowel)
