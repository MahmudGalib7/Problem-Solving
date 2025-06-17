# n,m = map(int,input().split())
# matrix = []
# for _ in range(n):
#     row = list(map(int,input().split()))
#     matrix.append(row)

# max_sum = float('-inf')
# max_row = -1
#
# for i in range(n):
#     row_sum = sum(matrix[i])
#     if row_sum > max_sum:
#         max_sum = row_sum
#         max_row = i

# print(f"Max sum: {max_sum}, \nMax Row: {max_row}")

# max_sum = float('-inf')
# max_col = -1
#
# for col in range(m):
#     col_sum = 0
#     for row in range(n):
#         col_sum += matrix[row][col]
#     if col_sum > max_sum:
#         max_sum = col_sum
#         max_col = col
# print(f"Max sum: {max_sum}, \nMax Column: {max_col}")

"""
ISLAND PROBLEM
"""

# from collections import deque
#
# def bfs(grid, visited, i, j, n, m):
#     dir = [(-1, 0), (1, 0), (0, -1), (0, 1)]
#     queue = deque()
#     queue.append((i, j))
#     visited[i][j] = True
#
#     while queue:
#         x, y = queue.popleft()
#         for dx, dy in dir:
#             nx, ny = x + dx, y + dy
#             if 0 <= nx < n and 0 <= ny < m:
#                 if grid[nx][ny] == '1' and not visited[nx][ny]:
#                     visited[nx][ny] = True
#                     queue.append((nx, ny))
#
# def solve(grid, n, m):
#     visited = [[False for _ in range(m)] for _ in range(n)]
#     count = 0
#     for i in range(n):
#         for j in range(m):
#             if grid[i][j] == '1' and not visited[i][j]:
#                 bfs(grid, visited, i, j, n, m)
#                 count += 1
#     return count
#
# n,m = map(int, input().split())
# grid = [list(input().strip()) for _ in range(n)]
# print(solve(grid, n, m))

"""
House Color Problem
"""