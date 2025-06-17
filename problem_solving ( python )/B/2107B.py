t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    apples = list(map(int, input().split()))

    mx = max(apples)
    mn = min(apples)

    if mx - mn <= k:
        total = sum(apples)
        print("Tom" if total % 2 == 1 else "Jerry")
        continue

    # Check if reducing max can help
    max_count = apples.count(mx)
    second_max = max([x for x in apples if x != mx], default=mn)

    new_max = mx if max_count > 1 else max(mx - 1, second_max)

    if new_max - mn <= k:
        total = sum(apples)
        print("Tom" if total % 2 == 1 else "Jerry")
    else:
        print("Jerry")
