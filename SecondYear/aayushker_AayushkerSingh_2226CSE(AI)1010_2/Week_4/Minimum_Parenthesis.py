from os import *
from sys import *
from collections import *
from math import *

def minimumParentheses(pattern):

    # Write your code here
    # Return the minimum number of parentheses required.
    oc,cc = 0,0

    for ch in pattern:
        if ch == '(':
            oc += 1
        elif ch == ')' and oc > 0:
            oc -= 1
        else:
            cc += 1

    return oc + cc

    pass
