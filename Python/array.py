#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maximumPerimeterTriangle' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY sticks as parameter.
#


def triangle_checker(a,b,c):
    
    if(a<0 or b<0 or c<0 or a+b<=c or b+c<=a or c+a<=b):
        return -1;
    
    return 1
       
def maximumPerimeterTriangle(sticks):
    sticks.sort()
    f=len(sticks)
    for i in reversed(range(2,f)):
        a=sticks[i]
        b=sticks[i-1]
        c=sticks[i-2]
        if(a < b+c):
            return [c,b,a]
    
    return [-1]
        
                        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    sticks = list(map(int, input().rstrip().split()))

    result = maximumPerimeterTriangle(sticks)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
