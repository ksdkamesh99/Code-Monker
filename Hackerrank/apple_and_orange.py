#!/bin/python3

import math
import os
import random
import re
import sys,array

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s, t, a, b, apples, oranges):
    k1=s-a
    k2=b-t
    c1=0
    c2=0
    m=apples.__len__()
    n=oranges.__len__()
    for i in range(m):
        if(apples[i]>=0):
            if(apples[i]>=k1 and apples[i]<=(t-a)):
                c1=c1+1
    for j in range(n):
        if(oranges[j]<=0):
            v=abs(oranges[j])
            if(v>=k2 and v<=(b-s)):
                c2=c2+1
    print(c1)
    print(c2)

if __name__ == '__main__':
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
