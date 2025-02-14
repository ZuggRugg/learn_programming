# chapter 7 of the Python 3.13 tutorial 

# * 7.1. Fancier Output Formatting

# formatted string literals allow you to have operations inside strings
# by using f' before the string like f'Hello World {3.46}'
print(f'Hello World {3.46}', "\n")


# using the : operator can specify how much space you want between things good for formatting
table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 7678}
for name, phone in table.items():
    print(f'{name:10} ==> {phone:10d}')


print('\n')
# SKIPPING SECTIONS
 # * 7.1.2. The String format() Method
 # * 7.1.3. Manual String Formatting
 # * 7.1.4. Old string formatting
# for now int


# * 7.2. Reading and Writing Files

# open() returns a file object, and is most commonly used with two positional arguments and one keyword argument:
# open(filename, mode, encoding=None)

#open txt file using utf8 encoding and read its contents
#more formal way to do this, Python tutorial tells me to do this but most people use a simpler way
with open('test.txt', 'r', encoding='utf-8') as f:
    read_data = f.read()
    print(read_data)
    f.close()


 # methods for file
# f.readline() read line from file
# f.write("this is a test string") writes to file
# f.read() read a file and store its contents as a string

#how to write to file 
f = open("test.txt", "w")
f.write("this is a new line")
f.close()

#now read the new file
fprint = open("test.txt", "r")
read_data = fprint.read()
fprint.close()


#but what if we want to just add a new line without overwriting other content in the file?
# then you use the 'a' or append mode with the function 
fprint2 = open("test.txt", "a")  
read_data = fprint2.write("\nthis is another string with append mode")
fprint2.close()





#7.2.2 saving data in a structured JSON file
import json
x = [1, 'simple', 'list']
jsonObject = json.dumps(x)
print(jsonObject)

#look more into JSON file libraries and such
