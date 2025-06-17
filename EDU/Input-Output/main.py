# import sys
# height, width = map(int, sys.stdin.readline().split())
#
# print(height, width)
#
# import os
# M = 12 * (10 ** 7)
# instance = list(map(int, os.read(0, M).split()))
# print(instance)

from collections import defaultdict
nb_edges = int(input())
g = defaultdict(dict)
for _ in range(nb_edges):
    u, v, weight = input().split()
    g[u][v] = int(weight)