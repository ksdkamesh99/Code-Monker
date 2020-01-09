#!/bin/python3

import math
import os
import random
import re
import sys
import array as a

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    c=0
    d=0
    for i in range(3):
        if(a[i]>b[i]):
            c=c+1
        elif(a[i]<b[i]):
            d=d+1
    arr=[c,d]
    return arr
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
