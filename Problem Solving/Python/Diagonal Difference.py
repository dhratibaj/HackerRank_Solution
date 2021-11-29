n = int(input().strip())
a = []
for _ in range(n):
    a.append(list(map(int, input().rstrip().split())))
d1 = sum([a[x][x] for x in range(n)]) 
d2 = sum([a[x][n-1-x] for x in range (n)])
print(abs(d1-d2))
