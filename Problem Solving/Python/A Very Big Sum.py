ar_count = int(input().strip())
ar = list(map(int, input().rstrip().split()))
s = 0
for i in ar:
    s = s + i
print(s)

#-------------------------------another approach------------------------

ar_count = int(input().strip())
ar = list(map(int, input().rstrip().split()))
print(sum(ar))

#------------------------------------with inbuild code------------------

#!/bin/python3

import math
import os
import random
import re
import sys

def aVeryBigSum(ar):
    return sum(ar)
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    ar_count = int(input().strip())
    ar = list(map(int, input().rstrip().split()))
    result = aVeryBigSum(ar)
    fptr.write(str(result) + '\n')
    fptr.close()
