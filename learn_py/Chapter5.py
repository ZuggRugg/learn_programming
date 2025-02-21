#Chapter 5 Work on Python3 Documentation

#5.1
# you can append to a list with
# list.append(x)

# a.insert(0, x)
#insert at index and then second argument is the value you want inserted

#list.remove() remove item with value
#list.pop() remove item at given position
#list.clear() remove entire list
#list.reverse() reverse entire list
#list.sort() 


a = [1, 4, 10, 500, 39, 20, 35, 33, 3, -333, -1, -2]
a.sort() 

# a.remove(500) remove specific element value (note index)
# a.reverse() reverse list 
#a.copy() make a shallow copy of the list

# print then reverse list, then print after reverse
# Python has methods out the wazoo for dealing with data structures
print(a)
a.reverse()
print(a)

#you can use a list as a stack by exclusively using the pop and append methods
#for pushing and poping on the stack.

#You Can Use A List As A Queue By This
#from collections import deque

#use append and popleft for operations in Queue

#can also use the del statement to remove elements from list of a slice of the list
#del a[1:3] removes the elements in 1:3



#Tuples And Sequences:
#tuples are a number of values seperated by commas

t = 12345, 54321, 'hello!'
u = t, (1, 2, 3, 4, 5)
print("\n", "here is a tuple: ", u)
#you cannot assign a single value like u[0] = 5 but you can for many comma seperated values
#nesting tuples correctly is good code practice
newtuple = ([1, 3, 5, 6, 7], [1, 5, 7, 2, 1])
print(newtuple)



#Python sets:
#a set is an unordered collection with no duplicate elements
#they also support basic set operations like Union, Intersection, 

basket = {'apple', 'orange', 'apple', 'pear', 'orange', 'banana'}
print(basket)  # show that duplicates have been removed


a = set('abracadabra')
print("here is a set of the unique chars in abracadabra", a)



#Python Dictionary's:
#also known as associative arrays in other languages or Hash Map in C++
#organized into key-value pairs

tel = {'jack': 4098, 'sape': 4139}
tel['guido'] = 4127
print(tel)

# the dict function directly builds a dictionary from a list of key-value pairs
dicto = dict([('sape', 4139), ('guido', 4127), ('jack', 4098)])
print("\ndictionary made from the dict function", dicto)


#the for in .items() method is good for iterating over dictionary
knights = {'gallahad': 'the pure', 'robin': 'the brave'}
for k, v in knights.items():
    print(k, v)


#loop of a sequence of sorted basket (leaves initial list alone)
# >>> basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
# >>> for i in sorted(basket):
# ...     print(i)



