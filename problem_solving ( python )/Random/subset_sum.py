arr = [1, 1, 1, 1, 1]
target = 3

"""
    The code includes two functions, one that calculates the number of subsets with a specific sum and
    another that prints combinations of numbers that evaluate to a target sum.
    
    :param num: It seems like you have not provided the values for the `arr` and `target` parameters in
    the code snippet. In order to run the functions `subset_sum` and `printTargetComb`, you need to
    provide the values for `arr` and `target`
    :param target: The `target` parameter is used in both functions `printTargetComb` and `subset_sum`.
    In the `printTargetComb` function, it represents the target sum that we are trying to achieve by
    adding or subtracting elements from the `num` list. In the `subset_sum` function
    :return: The code snippet provided defines two functions: `printTargetComb` and `subset_sum`.
"""

def printTargetComb(num, target):
    result = []
    def dfs(index, current_exp, current_sum):
       if(index == len(num)):
           if(current_sum == target):
               result.append("".join(current_exp)) 
           return
       dfs(index+1, current_exp+['+', str(num[index])], current_sum+num[index])
       dfs(index+1, current_exp+['-', str(num[index])], current_sum-num[index])
    dfs(0, [], 0)
    return result

def subset_sum(arr, target):
    if((sum(arr)+target) % 2 != 0 or (sum(arr)+target) < 0):
        return 0
    
    subset_sum = (sum(arr) + target) // 2
    
    dp = [0] * (subset_sum + 1)
    dp[0] = 1
    
    for num in arr:
        for s in range(subset_sum, num-1, -1):
            dp[s] += dp[s - num]
            
    return dp[subset_sum]

print(subset_sum(arr, target))
print(printTargetComb(arr, target))

"""
[1, 6, 11 ,5] such that the absolute difference between their sums is minimized
23
12 - 11 = 1
sum([1,5,6]) - sum([11])
"""

"""
    The function `min_subset_diff` calculates the minimum difference between two subsets of an array by
    using dynamic programming to find the subset with a sum closest to half the total sum.
    
    :param arr: The `min_subset_diff` function you provided is designed to find the minimum difference
    between two subsets of a given array. The function divides the array into two subsets such that the
    difference between the sums of the subsets is minimized
    :return: The function `min_subset_diff` returns a tuple containing three elements:
    1. The minimum difference between the sums of two subsets of the input array.
    2. The elements of one of the subsets that contribute to the minimum difference.
    3. The elements of the other subset that do not belong to the first subset.
"""

def min_subset_diff(arr):
    total = sum(arr)
    half_total = total // 2
    n = len(arr)
    dp = [[False] * (half_total+1) for _ in range(n+1)]

    for i in range(n+1):
        dp[i][0] = True
    
    for i in range(1, n + 1):
        for j in range(1, half_total+1):
            if arr[i-1] <= j:
                dp[i][j] = dp[i-1][j] or dp[i-1][j - arr[i-1]]
            else:
                dp[i][j] = dp[i-1][j]
                
    for j in range(half_total, -1 ,-1):
        if dp[n][j]:
            sum1 = j
            break
    sum2 = total - sum1
    min_diff = abs(sum2 - sum1)

    subset1 = []
    i, j = n, sum1
    while i > 0 and j > 0:
        if dp[i][j] and not dp[i - 1][j]:
            subset1.append(arr[i-1])
            j -= 1
        i -= 1
    subset2 = arr[:]
    for x in subset1:
        subset2.remove(x)
    
    return min_diff, subset1, subset2
 
print(min_subset_diff([1, 6, 11, 5]))
print(min_subset_diff([1, 2, 7]))
print(min_subset_diff([1, 1, 3, 4, 7]))

# get all subset for every target

"""
    The function `target_subset` calculates the number of subsets in a given array that sum up to a
    target value.
    
    :param arr: [1, 2, 3, 3]
    :param target: The `target_subset` function takes a list of integers `arr` and a target integer
    `target`. It calculates the number of subsets of `arr` that sum up to the `target` value
    :return: The function `target_subset` is returning the count of subsets in the input array `[1, 2,
    3, 3]` whose elements sum up to the target value `6`.
"""
    
def target_subset(arr, target):
    n = len(arr)
    count = 0
    for mask in range(1 << n):
        sum = 0
        for i in range(n):
            if(mask & (1 << i)):
                sum += arr[i]
        if sum == target:
            count += 1
    
    return count

print(target_subset([1,2,3,3], 6))

# get a subset divided by two to get it same

"""
    The function `canPartition` in Python checks if a given array can be partitioned into two subsets
    with equal sum.
    
    :param arr: The provided code is a Python function that aims to determine if a given array `arr` can
    be partitioned into two subsets with equal sum. The function uses dynamic programming to solve this
    problem efficiently
    :return: The function `canPartition` is returning a boolean value. It returns `True` if it is
    possible to partition the input array `arr` into two subsets with equal sum, and `False` otherwise.
"""
    
def canPartition(arr):
    total = sum(arr)
    if total % 2 != 0:
        return False
    
    target = total // 2
    n = len(arr)
    
    dp = [[-1] * (target + 1) for _ in range(n)]
    
    def func(i, curr_sum):
        if curr_sum == 0:
            return True
        if i < 0 or curr_sum < 0:
            return False
        if dp[i][curr_sum] != -1:
            return dp[i][curr_sum]
        
        not_pick = func(i - 1, curr_sum)
        pick = func(i - 1, curr_sum - arr[i])

        dp[i][curr_sum] = pick or not_pick
        return dp[i][curr_sum]
    
    return func(n - 1, target)

"""
    The function `equal_subset_sum` checks if it is possible to divide an array into two subsets with
    equal sums.
    
    :param arr: The `equal_subset_sum` function you provided is using dynamic programming to determine
    if it's possible to divide the input array `arr` into two subsets with equal sums
    :return: The function `equal_subset_sum(arr)` is returning a boolean value. It returns `True` if it
    is possible to partition the input array `arr` into two subsets with equal sum, and `False`
    otherwise.
"""

def equal_subset_sum(arr):
    total = sum(arr)
    if total % 2 != 0:
        return False
    half = total // 2
    
    n = len(arr)
    dp = [False] * (half+1)
    
    dp[0] = True
    
    for num in arr:
        for t in range(half, num-1, -1):
            dp[t] = dp[t] or dp[t-num]
    return dp[half]

print(canPartition([1, 5, 11, 5]))
print(canPartition([1,7,1,7]))
print(canPartition([1,6,5,11]))

print(equal_subset_sum([1, 5, 11, 5]))
