arr = [1, 1, 1, 1, 1]
target = 3

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

def min_subset_diff(arr):
    total = sum(arr)
    n = len(arr)
    dp = [False] * (total + 1)
    dp[0] = True

    for num in arr:
        for j in range(total, num - 1, -1):
            if dp[j - num]:
                dp[j] = True

    for s1 in range(total // 2, -1, -1):
        if dp[s1]:
            return abs(total - 2 * s1)

print(min_subset_diff([1, 6, 11, 5]))    
print(min_subset_diff([1, 2, 7]))         
print(min_subset_diff([1, 1, 3, 4, 7]))   
