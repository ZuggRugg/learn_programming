# My first Python test file while I go over the Official Python Tutorial
# This goes over Chapter 3 and 4 in the Official Python3 documentation

def addnumbers(x: int, y: int):
    return (x+y)


def fibNumbers():
    a, b = 0, 1
    while a < 10:
        print(a)
        a, b =  b, a+b


#basic conditionals and user input
def userInput():
    """do nothing this is documetation"""
    x = int(input("Please enter an integer: "))
    if x < 0:
        x = 0
        print('Negative changed to zero')
    elif x == 0:
        print('Zero')
    elif x == 1:
        print('Single')
    else:
        print('More')


def forloops(squares):
    print("\nHere is the squares with half of each element")
    for i in squares:
        print(i, i/2)


#functions without a Return value return 'None' which isnt printed or recognized by the interpreter


#indentation and whitespace is very important in Python

# ** is the power operator
# you can mix together floating and ints in operations
# \n means newline for printing just like C

print(" you can still have strings "
"broken up but they will still be correct"
" after all "
"\n")


# this is an example of a python list
squares = [1, 4, 9, 16, 25]
print("This is the iniial list of squares: ", squares)
print("slicing squares from 1:3 ", squares[0:3]) #slice list
print("Integer Wrap Around When Given -1 As Index: ", squares[-1]) #Wraps Around If Negative Number



#lists can also be concatenated
squares = squares + [1, 3, 4, 5, 6]
print("concatenated two lists together: ", squares)

#you can also append to the end of a list with
squares.append(5555)
print("appended to the end of list: ", squares)


#ranges can also be used in For-loops range()
# like >>> for i in range(5):
# ...     print(i)


# To iterate over the indices of a sequence, you can combine range() and len() as follows:
# >>> a = ['Mary', 'had', 'a', 'little', 'lamb']
# >>> for i in range(len(a)):
# ...     print(i, a[i])

#breaks and continues work just like in cpp


# Match statements are basically C switch statements
# def http_error(status):
#     match status:
#         case 400:
#             return "Bad request"
#         case 404:
#             return "Not found"
#         case 418:
#             return "I'm a teapot"
#         case _:
#             return "Something's wrong with the internet"

# You can combine several literals in a single pattern using | (“or”):
# case 401 | 403 | 404:
#     return "Not allowed"


# You can define parameters/arguments in function
# def ask_ok(prompt, retries=4, reminder='Please try again'):



a=554
b=5
print(addnumbers(a,b), "\n")
fibNumbers()     
# userInput()
forloops(squares)
