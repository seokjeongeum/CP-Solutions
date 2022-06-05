N, K = map(int, input().split())
friends = list()
for i in range(N):
    a, b = map(int, input().split())
    friends.append((a, b))
friends.sort()
for i in range(N):
    if K >= friends[i][0]:
        K += friends[i][1]
    else:
        break
print(K)
