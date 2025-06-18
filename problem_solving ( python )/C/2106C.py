def count_complementary_ways(n, k, A, B):
    known_c = None
    for i in range(n):
        if B[i] != -1:
            if known_c is None:
                known_c = A[i] + B[i]
            elif known_c != A[i] + B[i]:
                return 0

    if known_c is not None:
        for i in range(n):
            if B[i] == -1:
                needed = known_c - A[i]
                if needed < 0 or needed > k:
                    return 0
        return 1
    else:
        min_c = max(A)
        max_c = min(A[i] + k for i in range(n))
        count = max(0, max_c - min_c + 1)
        return count

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    print(count_complementary_ways(n, k, A, B))
