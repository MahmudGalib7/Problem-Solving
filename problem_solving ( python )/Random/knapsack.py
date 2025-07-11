"""
5 15 -> N K

W - v
3 - 4
5 - 6
8 - 3
7 - 1
4 - 9
5 - 7
6 - 6
"""

W = 15
weights = [3, 5, 8, 7, 4, 5, 6]
values = [4, 6, 3, 1, 9, 7, 6]

def knapsack(W, weights, values):
    n = len(weights)
    
    # 2d dp table (n+1) * (W+1)
    dp = [[0] * (W+1) for _ in range(n+1)]
    for i in range(1, n+1):
        for w in range(1, W+1):
            if weights[i-1] < w:
                include = values[i-1] + dp[i-1][W - weights[i-1]]
                exclude = dp[i-1][W]
                dp[i][w] = max(include, exclude)
            else:
                dp[i][w] = dp[i-1][w]
    return dp[n][W]

print(knapsack(W, weights, values))