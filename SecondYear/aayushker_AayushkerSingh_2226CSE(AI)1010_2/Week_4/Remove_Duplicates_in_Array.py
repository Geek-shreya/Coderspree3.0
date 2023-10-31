def removeDuplicates(arr,n):
    # Write your code here.
    c = 1
    for i in range(1, n):
        if arr[i] != arr[i - 1]:
            arr[c] = arr[i]
            c += 1

    return c
    pass