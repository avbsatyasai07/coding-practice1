def split_and_join(line):
    # Step 1: Split the string into a list of words
    words = line.split(" ")
    
    # Step 2: Join the list using a hyphen
    result = "-".join(words)
    
    return result

if __name__ == '__main__':#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    result = []
    capitalize_next = True
    for ch in s:
        if ch == ' ':
            result.append(ch)
            capitalize_next = True
        else:
            if capitalize_next:
                result.append(ch.upper())
                capitalize_next = False
            else:
                result.append(ch)
    return ''.join(result)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()

    line = input()
    result = split_and_join(line)
    print(result)