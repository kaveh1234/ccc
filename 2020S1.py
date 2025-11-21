n = int(input())
obs = []

for _ in range(n):
    t, x = map(int, input().split())
    obs.append((t, x))

# Sort by time
obs.sort()

max_speed = 0.0

for i in range(n):
    for j in range(i + 1, n):
        dt = abs(obs[j][0] - obs[i][0])
        dx = abs(obs[j][1] - obs[i][1])
        speed = dx / dt
        if speed > max_speed:
            max_speed = speed

print(max_speed)
