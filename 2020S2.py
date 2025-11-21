n = int(input())  # rows
m = int(input())  # columns
k = int(input())  # operations

row = [0] * (n + 1)
col = [0] * (m + 1)

for _ in range(k):
    t, x = input().split()
    x = int(x)
    if t == 'R':
        row[x] ^= 1
    else:
        col[x] ^= 1

R = sum(row)
C = sum(col)

gold = R * (m - C) + C * (n - R)
print(gold)
