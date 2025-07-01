# def permuteUnique(arr):
#     if len(arr) == 0:
#             return []
#     if len(arr) == 1:
#         return [arr]
        
#     perm = []
#     seen = set() 
#     for i in range(len(arr)):
#         elem = arr[i]
#         if elem in seen:
#             continue
#         seen.add(elem)
#         rem = arr[:i] + arr[i+1:]
#         for p in permuteUnique(rem): 
#             perm.append([elem] + p)
        
#     return perm
# s = [1,2,3]
# for p in permuteUnique(s):
#     print(p)

# def permutation(nums):
#     nums.sort() 
#     result = []
    
#     def backtrack(path, used):
#         if len(path) == len(nums):
#             result.append(path[:])
#             return
#         for i in range(len(nums)):
#             if used[i]:
#                 continue
#             if i > 0 and nums[i] == nums[i - 1] and not used[i - 1]:
#                 continue 
#             used[i] = True
#             path.append(nums[i])
#             backtrack(path, used)
#             path.pop()
#             used[i] = False
    
#     backtrack([], [False] * len(nums))
#     return result

# s = [1, 2, 3]
# for p in permutation(s):
#     print(p)

# from collections import Counter

# def permutation(nums):
#     nums.sort()
#     result = []
#     def backtrack(path, count):
#         if len(path) == len(nums):
#             result.append(path[:])
#             return
        
#         for num in count:
#             if count[num] > 0:
#                 path.append(num)
#                 count[num] -= 1
#                 backtrack(path, count)
#                 path.pop()
#                 count[num] += 1
        
#     count = Counter(nums)
#     backtrack([], count)
#     return result
        
# s = [1, 2, 3]
# for p in permutation(s):
#     print(p)
