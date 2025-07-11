def min_task_time(cost):
    n = len(cost)
    inf = float('inf')
    dp = [[inf] * n for _ in range(1<<n)]
    dp[1][0] = 0
    
    for mask in range(1 << n):
        for u in range(n):
            if not (mask & (1 << u)):
                continue
            for v in range(n):
                if mask & (1 << v):
                    continue
                new_mask = mask | (1 << v)
                dp[new_mask][v] = min(dp[new_mask][v], (dp[mask][u]+cost[u][v]))

        final_mask = (1<<n) - 1
        min_time = inf
        for i in range(n):
            if i == 0:
                continue
            min_time = min(min_time, (dp[final_mask][i]+cost[i][0]))
    
    return min_time

cost = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]

print(min_task_time(cost))