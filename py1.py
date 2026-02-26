t=int(input())
while(t>0):
    a, b, c = map(int, input().split())
    if(((a+b)/2)>c):
        print('YES')
    else:
        print('NO')
    t=t-1