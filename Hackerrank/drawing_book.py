#!/bin/python3

import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    if(p>int(n/2)):
        if(n%2==0):
            k=int((n-p+1)/2)
            return k
        else:
            k=int((n-p)/2)
            return k
    else:
        k=int(p/2)
        return k
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = int(input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
