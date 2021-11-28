a = list(map(int, input().rstrip().split()))
b = list(map(int, input().rstrip().split()))
r = [0,0]
for i in range(3):
    if a[i]>b[i]:
        r[0] += 1
    elif(a[i]<b[i]):
        r[1] += 1
print(r[0],r[1])

#-----------------------------inbuild code--------------------------------

#!/bin/python3

import math
import os
import random
import re
import sys

def compareTriplets(a, b):
    r = [0,0]
    for i in range(3):
        if a[i]>b[i]:
            r[0] += 1
        elif(a[i]<b[i]):
            r[1] += 1
    return r

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
