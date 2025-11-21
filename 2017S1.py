n = int(input())
swifts = list(map(int, input().split()))
sems = list(map(int, input().split()))

ps = 0  # prefix swifts
pp = 0  # prefix semaphores
best = 0

for i in range(n):
    ps += swifts[i]
    pp += sems[i]
    if ps == pp:
        best = i + 1  # +1 because days are 1-indexed

print(best)
