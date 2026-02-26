# cook your dish here
T = int(input())
for _ in range(T):
    X, Y = map(int, input().split())
    total_coins = X * Y
    bags = total_coins // 100
    print(bags)