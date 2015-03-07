#bdhobare@gmail.com
#Palindrome implementation
string=input("Enter a string:\n")
def palindrome(str):
    reverse=str[::-1]
    if not reverse:
        return None
    elif(reverse==str):
        return True
    else:
        return reverse
print(palindrome(string))
