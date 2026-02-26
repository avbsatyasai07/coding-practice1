import math

T = int(input())
for _ in range(T):
    N, X = map(int, input().split())
    subscriptions = math.ceil(N / 6)
    total_cost = subscriptions * X
    print(total_cost)