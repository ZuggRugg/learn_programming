# chapter 7 of the Python 3.13 tutorial 

# * 7.1. Fancier Output Formatting

# formatted string literals allow you to have operations inside strings
# by using f' before the string like f'Hello World {3.46}'
print(f'Hello World {3.46}', "\n")


# using the : operator can specify how much space you want between things good for formatting
table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 7678}
for name, phone in table.items():
    print(f'{name:10} ==> {phone:10d}')



# SKIPPING SECTIONS
 # * 7.1.2. The String format() Method
 # * 7.1.3. Manual String Formatting
 # * 7.1.4. Old string formatting
# for now


# * 7.2. Reading and Writing Files

