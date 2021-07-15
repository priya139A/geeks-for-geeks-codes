!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'largestRectangle' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts INTEGER_ARRAY h as parameter.
#

def largestRectangle(h):
    mx = h[0]#
    l = len(h)
    for i in range(l):
        cnt = 0
        j = i
        k = i - 1
        if h[i] <= h[j]:
            while j < l and h[i] <= h[j]:
                cnt += 1
                j += 1
                
        if h[i] <= h[k]:
            while  k >= 0 and h[i] <= h[k]:
                cnt += 1
                k -= 1
                
        area = cnt * h[i]
        if area > mx:
            mx = area 
    
    return mx
        
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    h = list(map(int, input().rstrip().split()))

    result = largestRectangle(h)

    fptr.write(str(result) + '\n')

    fptr.close()
