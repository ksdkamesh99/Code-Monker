#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):
    v=bill.__len__()
    tsum=0
    for i in range(v):
        tsum=tsum+bill[i]
    asum=tsum-bill[k]
    ashare=int(asum/2)
    if(b==ashare):
        print("Bon Appetit")
    else:
        print(b-ashare)


if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)
