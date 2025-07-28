def getLongestSubsequence(words, groups):
    if not words or not groups or len(words) != len(groups):
        return []
      
    # long_sub = []
    # curr_grp = None
    # for word, group in zip(words, groups):
    #     if group != curr_grp:
    #         long_sub.append(word)
    #         curr_grp = group

    # return long_sub

    n = len(words) 
    dp = [1] * n
    parent = [-1] * n
    
    for i in range(n):
        for j in range(i):
            if groups[i] != groups[j]:
               if dp[j] + 1 >  dp[i]:
                   dp[i] = dp[j] + 1
                   parent[i] = j
    max_length = max(dp)
    idx = dp.index(max_length)
    result = []
    while idx != -1:
        result.append(words[idx])
        idx = parent[idx]
    
    return result[::-1]
                        
words = ["e", "a", "b"]
groups = [0, 0, 1]
print(getLongestSubsequence(words, groups))