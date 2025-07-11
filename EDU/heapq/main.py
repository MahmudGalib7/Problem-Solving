import heapq

arr = [7, 1, 2, 4, 3, 5]
heap = []
heapq.heappush(heap, 5)
heapq.heappush(heap, 7)
heapq.heappush(heap, 2)
heapq.heappush(heap, 8)
heapq.heappush(heap, 3)
print(heap) 

heapq.heappop(heap)
heapq.heappop(heap)
print(heap)

heapq.heapify(arr)
print(arr)