a = 12
b = 25

# print(f"a = {bin(a)[2:]}")
# print(f"b = {bin(b)[2:]}")
# print(f"a & b = {bin(a&b)[2:]}")
# print(f"A & B = {a & b}")

# def even_or_odd(n):
#     return n & 1

# print(even_or_odd(5))
# print(even_or_odd(8))

# print(5 & (1 << 2))

# print(bin(10))
# print(0b0101)
# print(~10)
# print(0b10101)
# print(bin(-11)[3:])

# print((6^1)/2)
# print(bin(6))


# def count_one_bit(n):
#     count = 0
#     while(n > 0):
#         if n & 1:
#             count += 1
#         else:
#             n = n >> 1
    
#     return count

# def count_one_bit(n):
#     count = 0
#     while n:
#         n &= n-1
#         count += 1
#     return count

# n = int(input())
# count = 0
# for i in range(1, n+1):
#     if count_one_bit(i) % 2 == 0:
#         count += 1
#         print(i)
# print(f"Count: {count}")

def subset(arr):
    n = len(arr)
    total_subset = 1 << n # 2 to the power of n
    for i in range(total_subset):
        subset = []
        for j in range(n):
            if i & (1 << j): # check if ith bit in 1
                subset.append(arr[j])
        print(subset)
        
subset(['a', 'b', 'c'])

def subset_sum(arr):
    n = len(arr)
    sum = 0
    total_subset = 1 << n
    for i in range(total_subset):
        for j in range(n):
            if i & (1 << j):
                sum += arr[j]
    return sum

print(subset_sum([1,2]))

def xor_subset_sum(arr):
    n = len(arr)
    xor_sum = 0
    total_subset = 1 << n
    for i in range(total_subset):
        sum = 0
        for j in range(n):
            if i & (1 << j):
                sum ^= arr[j]
        xor_sum += sum
    return xor_sum

print(xor_subset_sum([1,2,3]))
