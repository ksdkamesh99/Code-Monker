#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the beautifulDays function below.
def reverse1(y):
    y=str(y)
    y=y[::-1]
    y=int(y)
    return y

def beautifulDays(i, j, k):
    count=0
    for t in range(i,j+1):
        f=t-reverse1(t)
        if(f%k==0):
            count=count+1
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ijk = input().split()

    i = int(ijk[0])

    j = int(ijk[1])

    k = int(ijk[2])

    result = beautifulDays(i, j, k)

    fptr.write(str(result) + '\n')

    fptr.close()
