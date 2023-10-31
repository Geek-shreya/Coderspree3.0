from typing import List

def bubbleSort(arr: List[int], n: int):
    n = len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
           if(arr[j] > arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
    return arr
            