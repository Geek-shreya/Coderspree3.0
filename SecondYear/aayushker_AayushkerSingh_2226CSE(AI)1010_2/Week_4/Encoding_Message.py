from os import *
from sys import *
from collections import *
from math import *

def encode(message):
    # Write your code here.
    eme = ""
    c = 1

    for i in range(1, len(message)):
        if message[i] == message[i - 1]:
            c += 1
        else:
            eme += message[i - 1] + str(c)
            c = 1

    eme += message[-1] + str(c)
    return eme
    pass