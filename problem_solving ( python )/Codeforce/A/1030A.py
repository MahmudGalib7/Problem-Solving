t = int(input())
opinion = list(map(int, input().split()))
print("EASY" if sum(opinion) == 0 else "HARD")