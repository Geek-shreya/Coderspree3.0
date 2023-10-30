from os import *
from sys import *
from collections import *
from math import *

from sys import stdin
import sys


def findSecondl(sequenceOfNumbers):
    # Write your code here.
    l = float('-inf')
    sl = float('-inf')

    for num in sequenceOfNumbers:
        if num > l:
            sl = l
            l = num
        elif num > sl and num != l:
            sl = num

    if sl == float('-inf'):
        return -1
    else:
        return sl


def takeInput():
    n = int(input())

    sequenceOfNumbers = list(map(int, input().strip().split(" ")))

    return sequenceOfNumbers, n


# Main.
t = int(input())
while t:
    sequenceOfNumbers, n = takeInput()
    print(findSecondl(sequenceOfNumbers))
    t = t-1
