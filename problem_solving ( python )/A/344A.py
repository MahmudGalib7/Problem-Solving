n = int(input())
magnets = []

for i in range(n):
    magnets.append(input())
group_count = 1
for i in range(1, n):
    if magnets[i] != magnets[i - 1]:
        group_count += 1
if n == 0:
    group_count = 0

print(group_count)
