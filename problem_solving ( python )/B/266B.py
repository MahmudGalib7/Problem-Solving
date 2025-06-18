n, t = map(int, input().split())
queue = list(map(str, input().strip()))


def process_queue(n, queue, t):
    queue = list(queue)
    for _ in range(t):
        i = 0
        while i < n - 1:
            if queue[i] == 'B' and queue[i + 1] == 'G':
                queue[i], queue[i + 1] = queue[i + 1], queue[i]
                i += 2 
            else:
                i += 1
                
    return ''.join(queue)

print(process_queue(n, queue, t))