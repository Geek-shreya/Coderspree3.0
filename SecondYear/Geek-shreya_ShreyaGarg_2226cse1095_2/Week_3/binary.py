def search(nums: [int], target: int):
    for i in range(len(arr)):
        if(nums[i] == target):
            return i
    return -1




    
n= int (input())
arr = list(map(int,input().strip().split()))[:n]
target =int (input())
print (search(arr, target))