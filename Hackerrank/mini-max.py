#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    min,max=arr[0],arr[0]
    sum=0
    for i in range(5):
        sum=sum+arr[i]
        if(min>=arr[i]):
            min=arr[i]
        elif(max<=arr[i]):
            max=arr[i]
    print(sum-max,sum-min)
    
    
if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
