string_1 = input('Enter the first string: ')
string_2 = input('Enter the second string: ')
str_1 = sorted(string_1.lower())
str_2 = sorted(string_2.lower())
if (str_1 == str_2):
    print('The strings are anagrams.')
else:
    print('The strings are not anagrams.')
