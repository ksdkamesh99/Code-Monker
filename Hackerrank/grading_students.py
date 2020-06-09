#!/bin/python3

import os
import sys
import array

#
# Complete the gradingStudents function below.
#
def gradingStudents(grades):
    k=grades.__len__()
    for i in range(n):
        if(grades[i]>=38):
            if((grades[i]%5)>=3):
                v=grades[i]//5
                grades[i]=(v+1)*5
    return grades
                
if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    grades = []

    for _ in range(n):
        grades_item = int(input())
        grades.append(grades_item)

    result = gradingStudents(grades)

    f.write('\n'.join(map(str, result)))
    f.write('\n')

    f.close()
