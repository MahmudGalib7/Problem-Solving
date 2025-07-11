# from collections import Counter

# a = ["flower","flow","flight"]
# answer = []

# for i in a:
#     prefix = ""
#     for j in range(len(i)):
#         prefix += i[j]
#         answer.append(prefix)

# count = Counter()

# for word in a:
#     seen = set()
#     prefix = ""
#     for ch in word:
#         prefix += ch
#         if prefix not in seen:
#             count[prefix] += 1
#             seen.add(prefix)

# duplicates = [s for s in count if count[s] == len(a)]
# if duplicates:
#     result = max(duplicates, key=len)
#     print(result)
# else:
#     print("")

a = ["flower","flow","flight"]

def common_prefix(a):
    prefix=a[0]
    for s in a[1:]:
        while not s.startswith(prefix):
            prefix = prefix[:-1]
            if not prefix:
                return ""
    return prefix
