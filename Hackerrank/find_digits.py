#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the findDigits function below.
def findDigits(n):
    
    w=str(n)
    count=0
    for i in range(w.__len__()):
        q=int(w[i])
        if(q==0):
            continue
        else:
            if(n%q==0):
                count=count+1
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
