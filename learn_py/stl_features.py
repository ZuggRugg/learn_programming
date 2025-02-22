# THis is the final portion of Some Python Tutorial things I can learn
# Command to compile if using argparse
# python stl_features.py --lines=5 stl_features.py Chapter9.py


import os #basic OS system operations
import math #basic Math library
import shutil #for messing with files and directories more
# import argparse #This is for advanced command line compilation arguments
# import glob #This is
# import re #this is for regex and string matching
import sys #this has basic C and Cpp Functions built in

# for i in range(5):
#     print("printing 5 times bitch!!!!!!!!!!!")


# the OS module has dozens of functions on dealing with the OS system
if(os.name == "nt"):
    print("\n currently using a Windows operating system")


print("\nthe current working directory: ", os.getcwd())
print("\nPrint out all the functions for os: \n", dir(os))
# help(os) returns a manual page for the os system
# os.system('mkdir newdir')




# use stdcout, stdcin, and stderror functions from sys
sys.stdout.write("This is the worst")
# sys.stdin.read(x)
sys.stderr.write("This is an example of throwing an error\n")

# parser = argparse.ArgumentParser(
#     prog='top',
#     description='Show top lines from each file')
# parser.add_argument('filenames', nargs='+')
# parser.add_argument('-l', '--lines', type=int, default=10)
# args = parser.parse_args()
# print("Arg Parser function details\n", args)
