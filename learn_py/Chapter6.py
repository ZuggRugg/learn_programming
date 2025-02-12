# This is chapter 6 of the official Python 3.13 Documentation
#modules and how to use modules

import fibo 

#calls the function from the fibo file in the directory where this file is
# fibo.fib(500)
fibo.fib(500)

# A module can contain executable statements as well as function definitions. These statements are intended to
# initialize the module. They are executed only the first time the module name is encountered in an import statement.


#you can import just specific functions with like
# from fibo import fib2 
#this will only include the specific function from that modules namespace 

# There is even a variant to import all names that a module defines:
# >>> from fibo import *


# If the module name is followed by as, then the name following as is bound directly to the imported module.

# >>> import fibo as fib
# >>> fib.fib(500)
# 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377

#basically giving the imported module its own namespace to use to prevent naming colliisions
# (i.e) Pytorch and MatPlotLib might have the same function name

# python first looks in the working directory then looks outwards using the Path Variable that is
# currently set, then looks for the module in any current packages in the library


#to speed up compilation Python caches compiled modules in the pycache
#the cache checks to see if any module is out of date and need recompiled


#Python comes avaliable with a set of standard modules.
#A package is a collection of modules (or just one file)

#modules 
