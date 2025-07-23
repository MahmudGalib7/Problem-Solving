def solve(n):
    res = []
    for i in range(n):
        row = [1] * (i + 1)
        for j in range(1, i):
            row[j] = res[i - 1][j] + res[i - 1][j - 1]
        res.append(row)
    return res

print(solve(5))

import math
from typing import List
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        def fact(n):
            return 1 if n == 0 else n * fact(n-1)
        def ncr(n,r):
            return fact(n) // (fact(r) * fact(n-r))
        triangle = []
        for i in range(numRows):
            row = []
            for r in range(i+1):
                val = ncr(i,r)
                row.append(val)
            triangle.append(row)
        return triangle
