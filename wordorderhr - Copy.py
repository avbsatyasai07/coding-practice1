# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys

def solve():
    input_data = sys.stdin.read().split()
    
    if not input_data:
        return
        
    n = int(input_data[0])
    words = input_data[1:]
    
    word_counts = {}
    
    for word in words:
        if word in word_counts:
            word_counts[word] += 1
        else:
            word_counts[word] = 1
            
    print(len(word_counts))
    print(*(word_counts.values()))

if __name__ == "__main__":
    solve()