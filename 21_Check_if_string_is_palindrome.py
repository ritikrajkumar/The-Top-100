string = input('Enter the string: ')
reverse = string[::-1]
if (string == reverse):
    print('The string is a palindrome.')
else:
    print('The string is not a palindrome.')