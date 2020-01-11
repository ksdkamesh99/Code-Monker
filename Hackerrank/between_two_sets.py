#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def getTotalX(a, b):
    n=a.__len__()
    m=b.__len__()
    k=abs(b[0]-a[n-1])
    x=0
    for i in range(a[n-1],b[0]+1):
        c=0
        for j in range(n):
            if(a[j]>=i):
                if(a[j]%i==0):
                    c=c+1
            else:
                if(i%a[j]==0):
                    c=c+1
        if(c==n):
            v=0
            for h in range(m):
                if(b[h]%i==0):
                    v=v+1
                if(v==m):
                    x=x+1
    return x 



        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
