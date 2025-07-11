import heapq
from typing import List

class Solution:
    def maxEvents(self, events: List[List[int]]) -> int:
        events.sort()
        minheap = []
        day = 1
        i = 0
        attendent = 0

        n = len(events)
        while i<n or minheap:
            while i < n and events[i][0] == day:
                heapq.heappush(minheap, events[i][1])
                i+=1
            while minheap and minheap[0] < day:
                heapq.heappop(minheap)
            if len(minheap) != 0:
                heapq.heappop(minheap)
                attendent += 1
            day += 1

        return attendent

import heapq 
class Solution:
    def maxEvents(self, events: List[List[int]]) -> int:
        events.sort(key = lambda x:x[1])
        max_day = max(e[1] for e in events)
        parent = list(range(max_day+2))
        def find(x):
            if parent[x] != x:
                parent[x] = find(parent[x])
            return parent[x]
        count = 0
        for s, e in events:
            a = find(s)
            if a <=e:
                count += 1
                parent[a] = find(a + 1)
        return count