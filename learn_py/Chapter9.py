print("hello")




#  * 9.1. A Word About Names and Objects
#  * 9.2. Python Scopes and Namespaces
#  * 9.2.1. Scopes and Namespaces Example
#  * 9.3. A First Look at Classes
#  * 9.3.1. Class Definition Syntax
#  * 9.3.2. Class Objects
#  * 9.3.3. Instance Objects
#  * 9.3.4. Method Objects
#  * 9.3.5. Class and Instance Variables
#  * 9.4. Random Remarks
#  * 9.5. Inheritance
#  * 9.5.1. Multiple Inheritance
#  * 9.6. Private Variables
#  * 9.7. Odds and Ends
#  * 9.8. Iterators
#  * 9.9. Generators
#  * 9.10. Generator Expressions


# most namespaces are implemented as dictionaries in Python '
# the global keyword can specify that an object lives in the Global namespace

class MyClass:
    """A simple example class"""
    i = 12345

    def f(self):
        return 'hello world'


# assigns x as an object of MyClass and prints it out to screen
x = MyClass()
print(x.f())


# You can create a constructor for the class like     
# def __init__(self):
#     self.data = []
# When a class defines an __init__() method, class instantiation automatically invokes __init__() for the newly
# created class instance. So in this example, a new, initialized instance can be obtained by:

# The class instantiation can also have its own variables
# ...     def __init__(self, realpart, imagpart):
# ...         self.r = realpart
# ...         self.i = imagpart



# 9.3.3. Instance Objects
class Dog:
    kind = 'canine'         # class variable shared by all instances

    # used to help define instance of class
    def __init__(self, name):
        self.name = name    # instance variable unique to each instance
        self.tricks = []    # create an empty list of trick names 


d = Dog('Buddy') #create an object of dog with name 'buddy'
print(d.kind)


# 9.4. Random Remarks¶

# If the same attribute name occurs in both an instance and in a class, then attribute lookup prioritizes the instance:

class Bag:
    def __init__(self):
        self.data = []

    def add(self, x):
        self.data.append(x)

    def addtwice(self, x):
        self.add(x)
        self.add(x)

    def print(self):
        print(self.data)



Baggy = Bag()
Baggy.add("hello")
Baggy.add(2)
Baggy.add("3")
Baggy.add("4")
print("printing out the Bag object instance: ")
Baggy.print()

# Each value is an object, and therefore has a class (also called its type). It is stored as object.__class__.


# 9.5. Inheritance¶

# Of course, a language feature would not be worthy of the name “class” without supporting inheritance. The syntax
# for a derived class definition looks like this:

# class DerivedClassName(BaseClassName):
#     <statement-1>
#     .
#     .
#     .
#     <statement-N>

# derived class for base class
class Box(Bag):
    i = 5



