#!/bin/python3

import math
import os
import random
import re
import sys
import array as a

# Complete the plusMinus function below.
def plusMinus(arr):
    p,n,nn=0,0,0
    k=arr.__len__()
    for i in range(k):
        if(arr[i]>=0):
            if(arr[i]==0):
                nn=nn+1
            else:
                p=p+1
        else:
            n=n+1
    print(p/k)
    print(n/k)
    print(nn/k)
if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
