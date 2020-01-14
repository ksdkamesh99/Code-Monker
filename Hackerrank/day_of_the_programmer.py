#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the migratoryBirds function below.
def migratoryBirds(arr):
    ar=[0,0,0,0,0]
    q=arr.__len__()
    for j in range(1,6):
        for i in range(q):
            if(arr[i]==j):
                ar[j-1]=ar[j-1]+1
    maxc=ar[0]
    for j in range(5):
        if(maxc<=ar[j]):
            maxc=ar[j]
    h=ar.index(maxc)
    return h+1
    


    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
