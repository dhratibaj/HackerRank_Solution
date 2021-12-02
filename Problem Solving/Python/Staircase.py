def staircase(n):
    for i in range(1,n+1):
        print(' '*(n-i)+'#'*(i))

#----------------------with complete inbuild code-------------------
#----------------------------brute force----------------------------
#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'staircase' function below.
#
# The function accepts INTEGER n as parameter.
#

def staircase(n):
    for i in range(n):
        for j in range(n-1-i,0,-1):
            print(" ",end="")
        for j in range(i+1):
            print("#",end="")
        print()
    
if __name__ == '__main__':
    n = int(input().strip())
    staircase(n)
