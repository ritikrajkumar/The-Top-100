string = input('Enter the string: ')
old_char, new_char = input('Enter the character or substring to replace: ').split()
new_string = string.replace(old_char, new_char)
print('The result:', new_string)