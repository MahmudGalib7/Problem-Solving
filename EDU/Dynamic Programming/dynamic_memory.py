# Top Down

# def fib_memo(n, dp=None):
#     if dp is None:
#         dp = [-1] * (n+1)
#     if n <= 1:
#         return n
#     if dp[n] != -1:
#         return dp[n]
#
#     dp[n] = fib_memo(n-1, dp) + fib_memo(n-2, dp)
#     return dp[n]
#
# print(fib_memo(20))

# Bottom Down

# def fib_tab(n):
#     if n <= 1:
#         return n
#     dp = [0] * (n+1)
#     dp[1] = 1
#     for i in range(2, n+1):
#         dp[i] = dp[i-1] + dp[i-2]
#     return dp[n]

# print(fib_tab(20))

# Space Optimized

# def fib(n):
#     fib1 = 0
#     fib2 = 1

#     if n<= 1:
#         return n
    
#     for i in range(2, n+1):
#         fib3 = fib1 + fib2
#         fib1 = fib2
#         fib2 = fib3
    
#     return fib3

# print(fib(20))

"""Question"""
"""
A length of a rod is given as l
An array price where price[i] is price of rod 
return the sum prices of the pieces
"""

# l = int(input())
# price = list(map(int, input().split()))

# def divide_rod_with_max_money(l, price):
#     div_l = [0] * (l+1)
#     cut_choice = [0] * (l+1)
#     for i in range(1, l+1):
#         max_val = float('-inf')
#         for j in range(i):
#             if max_val < price[j] + div_l[i - j - 1]:
#                 max_val = price[j] + div_l[i-j-1]
#                 cut_choice[i] = j + 1
#         div_l[i] = max_val
#     cut = []
#     n = l
#     while n > 0:
#         cut.append(cut_choice[n])
#         n -= cut_choice[n]
#     return div_l[l], cut

# max_val, cut = divide_rod_with_max_money(l, price)
# print(max_val, cut)

# l = int(input())
# price = list(map(int, input().split()))
#
# def divide_rod_with_max_money(n, cost, dp=None):
#     if dp is None:
#         dp = dict()
#     if n == 0:
#         return 0
#     if n in dp:
#         return dp[n]
#     val_max = float('-inf')
#     for i in range(1, n + 1):
#         if i <= len(cost):
#             current_val = cost[i - 1] + divide_rod_with_max_money(n - i, cost, dp)
#             val_max = max(val_max, current_val)
#     dp[n] = val_max
#     return val_max
#
# max_val = divide_rod_with_max_money(l, price)
# print(max_val)

"""Question"""
"""
An array of money notes given
Given the amount, Use the least number of notes to make the change
Return the number of notes used
"""

# amount = int(input())
# notes = [100, 50, 10, 5, 2, 1]
#
# def make_change(amount, notes):
#     dp = [float('inf')] * (amount + 1)
#     dp[0] = 0
#     for i in range(1, amount + 1):
#         for note in notes:
#             if i - note >= 0:
#                 dp[i] = min(dp[i], dp[i - note] + 1)
#     return dp[amount] if dp[amount] != float('inf') else -1
# print(make_change(amount, notes))

# amount = int(input())
# notes = [5, 2, 1]
#
# def make_change(amount, notes):
#     dp = [0] * (amount + 1)
#     dp[0] = 1
#     for coin in notes:
#         for i in range(coin, amount + 1):
#             dp[i] += dp[i - coin]
#     return dp[amount]
# print(make_change(amount, notes))

# arr = list(map(int, input().split()))
# target = int(input())

# def sub_array(arr, target):
#   left = 0
#   min_len = float('inf')
#   win_sum = 0

#   if target > 0:
#       for right in range(len(arr)):
#         win_sum += arr[right]
#         while win_sum >= target:
#           min_len = min(min_len, right - left + 1)
#           win_sum -= arr[left]
#           left += 1
#   return True if min_len != float('inf') else False

# print(sub_array(arr, target))