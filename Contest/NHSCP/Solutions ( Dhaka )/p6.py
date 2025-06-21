def solve():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        m, k = map(int, input().split())
        flowers = list(map(int, input().split()))
        
        dp = [False] * (n + 1)
        dp[0] = True
        
        for flower in flowers:
            new_dp = dp[:]
            
            for i in range(n + 1):
                if dp[i]:
                    for count in range(1, min(k + 1, (n - i) // flower + 1)):
                        new_sum = i + count * flower
                        if new_sum <= n:
                            new_dp[new_sum] = True
            
            dp = new_dp
        
        if dp[n]:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    solve()