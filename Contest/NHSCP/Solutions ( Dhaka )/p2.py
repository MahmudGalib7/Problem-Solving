def solve():
    n, m = map(int, input().split())
    targets = list(map(int, input().split()))
    
    logs = []
    for _ in range(m):
        l, r = map(int, input().split())
        logs.append((l, r))
    
    logs.sort()
    
    merged_logs = []
    for l, r in logs:
        if merged_logs and l <= merged_logs[-1][1]:
            merged_logs[-1] = (merged_logs[-1][0], max(merged_logs[-1][1], r))
        else:
            merged_logs.append((l, r))
    
    points = 0
    log_idx = 0
    
    for target in targets:
        covered = False
        
        for l, r in merged_logs:
            if l <= target <= r:
                covered = True
                break
        
        if not covered:
            points += 1
    
    print(points)

if __name__ == "__main__":
    solve()