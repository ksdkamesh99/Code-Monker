#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    #
    # Write your code here.
    #
    h=s[0]+s[1]
    h=int(h)
    m=s[3]+s[4]
    sec=s[6]+s[7]
    t=s[8]+s[9]
    if(t=="PM"):
        if(h==12):
            h=str(h)
        else:
            h=h+12
            h=str(h)

    else:
        if(h==12):
            h="00"
        else:
            h="0"+str(h)

    timeco=h+":"+m+":"+sec
    return timeco
    
            

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
