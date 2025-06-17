n = int(input())
count = 0
for i in range(n):
    p1, q2 = map(int, input().split())
    if (q2-2) >= p1:
        count += 1
    else:
        count += 0

print(count)