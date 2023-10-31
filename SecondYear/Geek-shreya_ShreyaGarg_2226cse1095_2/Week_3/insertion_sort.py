from os import *
from sys import *
from collections import *
from math import *

from typing import List

def insertionSort(n: int, arr: List[int]) -> None:
    if len(arr) <= 1:
        return  
 
    for i in range(1, n):  
        key = arr[i]  
        j = i-1
        while (j >= 0 and key < arr[j]):  
            arr[j+1] = arr[j]  
            j = j-1 
        arr[j+1] = key 