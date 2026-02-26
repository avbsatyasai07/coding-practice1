N = int(input())
weapons = list(map(int, input().split()))

even_count = sum(1 for w in weapons if w % 2 == 0)
odd_count = N - even_count

if even_count > odd_count:
    print("READY FOR BATTLE")
else:
    print("NOT READY")