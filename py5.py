T = int(input())
for _ in range(T):
    X, Y = map(int, input().split())
    total_hours = 4 * X + Y
    print(total_hours)