def binarySearch(arr, target):
    low, high = 0, len(arr)
    
    while(low < high):
        mid = (high+low) / 2
        if(arr[mid] < target):
            low = mid + 1
        else:
            high = mid
    
    return low

def binarySearch_too(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left+right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return left

arr = [1,3,5,7]
print(binarySearch(arr, 8))