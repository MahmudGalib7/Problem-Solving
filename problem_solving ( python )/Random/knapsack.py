"""
3 8 -> N W

3 30 -> w1 v1
4 40 -> w2 v2
5 60 -> w3 v3
"""

"""
    The code implements two functions, `knapsack_1d` and `knapsack_2d`, to solve the 0/1 knapsack
    problem using dynamic programming with different approaches (1D and 2D arrays).
    
    :param W: W represents the maximum weight capacity of the knapsack. In this case, W is set to 8
    :param weights: [3, 4, 5]
    :param values: values: [30, 40, 60]
    :return: The code defines two functions for solving the 0/1 knapsack problem - `knapsack_1d` and
    `knapsack_2d`. The `knapsack_1d` function uses a 1D array to store the maximum value that can be
    achieved with a given weight limit, while the `knapsack_2d` function uses a 2d array
"""

W = 8
weights = [3, 4, 5]
values = [30, 40, 60]

def knapsack_2d(W, weights, values):
    n = len(weights)
    dp = [[0] * (W+1) for _ in range(n+1)]
    
    for i in range(1, n+1):
        for w in range(1, W+1):
            if weights[i-1] <= w:
                include = values[i-1] + dp[i-1][w - weights[i-1]]
                exclude = dp[i-1][w]
                dp[i][w] = max(include, exclude)
            else:
                dp[i][w] = dp[i-1][w]
    return dp[n][W]

def knapsack_1d(W, weights, values):
    n = len(weights)
    dp = [0] * (W+1)
    
    for i in range(n):
        for w in range(W, weights[i] - 1, -1):
            dp[w] = max(dp[w], values[i] + dp[w-weights[i]])
    
    return dp[W]

print(f"KNAPSACK 1D: {knapsack_1d(W, weights, values)}")
print(f"KNAPSACK 2D: {knapsack_2d(W, weights, values)}")