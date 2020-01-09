#!/bin/python3

import math
import os
import random
import re
import sys
import array as a

# Complete the diagonalDifference function below.
def diagonalDifference(arr):
    n=arr.__len__()
    k1=0
    k2=0
    for i in range(n):
        for j in range(n):
            if(i==j):
                k1=k1+arr[i][j]
            if(i+j==n-1):
                k2=k2+arr[i][j]
    diff=k1-k2
    return abs(diff)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
