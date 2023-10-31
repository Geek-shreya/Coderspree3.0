def traffic(n: int, m: int, vehicle: [int]) -> int:
    # Write your code here.
    n = len(vehicle)
    left = 0  
    max_length = 0  
    zero_count = 0 

    for right in range(n):
        if vehicle[right] == '0':
            zero_count += 1

        while zero_count > m:
            if vehicle[left] == '0':
                zero_count -= 1
            left += 1

        max_length = max(max_length, right - left + 1)

    return max_length
    pass
