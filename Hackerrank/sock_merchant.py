#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    temp=[]
    count=0
    for i in range(n):
        c=1
        if(ar[i] in temp):
            continue
        else:    
            for j in range(i+1,n):
                if(ar[i]==ar[j]):
                    c=c+1
            if(c>1):
                temp.append(ar[i])
            count=count+int(c/2)
    return count
                


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
