import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
        
    idx = 0
    t = int(input_data[idx])
    idx += 1
    
    results = []
    for _ in range(t):
        n = int(input_data[idx])
        k = int(input_data[idx+1])
        idx += 2
        
        a = list(map(int, input_data[idx:idx+n]))
        idx += n
        
        motu = a[0::2]
        tomu = a[1::2]
        
        motu.sort(reverse=True)
        tomu.sort()
        
        swaps = min(k, len(motu), len(tomu))
        for i in range(swaps):
            if motu[i] > tomu[i]:
                motu[i], tomu[i] = tomu[i], motu[i]
            else:
                break
        
        if sum(tomu) > sum(motu):
            results.append("YES")
        else:
            results.append("NO")
            
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()