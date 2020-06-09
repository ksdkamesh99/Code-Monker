#!/bin/python3

import math
import os
import random
import re
import sys
import array as a

# Complete the birthdayCakeCandles function below.
def birthdayCakeCandles(ar):
    max=ar[0]
    n=ar.__len__()
    count=0
    for i in range(n):
        if(max<=ar[i]):
            max=ar[i]
    for i in range(n):
        if(ar[i]==max):
            count=count+1
    return count
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(ar)

    fptr.write(str(result) + '\n')

    fptr.close()
