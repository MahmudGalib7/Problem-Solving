from typing import List
import math

def maximumGap(nums: List[int]) -> int:
    n = len(nums)
    if n < 2:
        return 0

    min_v, max_v = min(nums), max(nums)
    if min_v == max_v:
        return 0

    bucket_size = math.ceil((max_v - min_v) / (n - 1))
    bucket_count = (max_v - min_v) // bucket_size + 1

    min_bucket = [math.inf] * bucket_count
    max_bucket = [-math.inf] * bucket_count

    for num in nums:
        x = (num - min_v) // bucket_size
        min_bucket[x] = min(min_bucket[x], num)
        max_bucket[x] = max(max_bucket[x], num)

    max_gap = 0
    prev_max = min_v

    for i in range(bucket_count):
        if min_bucket[i] == math.inf:
            continue
        max_gap = max(max_gap, min_bucket[i] - prev_max)
        prev_max = max_bucket[i]

    return max_gap

print(maximumGap([3, 6, 9])) 