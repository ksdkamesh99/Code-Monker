#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    q=scores.__len__()
    minimum=scores[0]
    maximum=scores[0]
    minc=0
    maxc=0
    for i in range(1,q):
        if(scores[i]>=minimum):
            if(scores[i]>maximum):
                maxc=maxc+1
                maximum=scores[i]
        else:
            minc=minc+1
            minimum=scores[i]
    return maxc,minc



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
