nums = [2,0,2,1,1,0]

# def sort(nums):
#     n = len(nums)
#     low, mid = 0, 0
#     high = n-1

#     while(mid <= high):
#         if nums[mid] == 0:
#             nums[low], nums[mid] = nums[mid], nums[low]
#             low += 1
#             mid += 1 
#         elif nums[mid] == 1:
#             mid += 1
#         else:
#             nums[high], nums[mid] = nums[mid], nums[high]
#             mid += 1
#             high -= 1
#     return nums

# print(sort(nums))

# def partition(arr, low, high):
#     pivot = arr[high]
#     i = low - 1

#     for j in range(low, high):
#         if arr[j] < pivot:
#             i += 1
#             arr[i], arr[j] = arr[j], arr[i]

#     arr[i+1], arr[high] = arr[high], arr[i+1]
#     return i+1


# def QuickSort(arr, low=0, high=None):
#     n = len(arr)
#     if high is None:
#         high = n - 1

#     if low < high:
#         p_index = partition(arr, low, high)
#         QuickSort(arr, low, p_index-1)
#         QuickSort(arr, p_index+1, high)

# QuickSort(nums)
# print(nums)

def mergeSort(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left = arr[:mid]
    right = arr[mid:]

    sorted_left = mergeSort(left)
    sorted_right = mergeSort(right)

    return merge(sorted_left, sorted_right)

def merge(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    result.extend(left[i:])
    result.extend(right[j:])

    return result

print(mergeSort(nums))