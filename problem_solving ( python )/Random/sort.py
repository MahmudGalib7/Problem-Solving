arr = [12, 64 ,53, 56, 13, 14, 88, 91]

def InsertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        k = arr[i]
        j = i - 1
        while(j >= 0 and arr[j] >= k):
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = k
        
    return arr

print(InsertionSort(arr)) 