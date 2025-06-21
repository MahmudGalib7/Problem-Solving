def solve():
    s = input().strip()
    n = len(s)
    
    booths = list(s)
    additional = 0
    
    i = 0
    while i < n:
        covered = False
        
        for j in range(max(0, i-1), min(n, i+2)):
            if booths[j] == '1':
                covered = True
                break
        
        if not covered:
            if i + 1 < n:
                booths[i + 1] = '1'
            else:
                booths[i] = '1'
            additional += 1
        
        i += 1
    
    return additional

t = int(input())
for _ in range(t):
    print(solve())