n = int(input())
LR = list(map(int, input().split()))
W = list(map(int, input().split()))

total = 0.0

for i in range(n):
    left_h = LR[i]
    right_h = LR[i+1]
    total += (left_h + right_h) * W[i] / 2
    
print(total)
