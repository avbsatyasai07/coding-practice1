#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

if __name__ == '__main__':
    s = input()
    
    counts = Counter(s)
    
    sorted_chars = sorted(counts.items(), key=lambda x: (-x[1], x[0]))
    
    for i in range(3):
        char, count = sorted_chars[i]
        print(f"{char} {count}")