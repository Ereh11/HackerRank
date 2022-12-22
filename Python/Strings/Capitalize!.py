#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    lt = s.split(' ')
    for i in range(len(lt)):
        lt[i] = lt[i].replace(lt[i], lt[i].capitalize())
    return ' '.join(lt)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
