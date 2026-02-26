import re
import sys

def transform_logic(match):
    symbol = match.group(0)
    if symbol == "&&":
        return "and"
    return "or"

def solve():
    n = int(input())
    for _ in range(n):
        line = sys.stdin.readline().rstrip('\n')
        
        result = re.sub(r"(?<= )(&&|\|\|)(?= )", transform_logic, line)
        
        while " && " in result or " || " in result:
            result = re.sub(r"(?<= )(&&|\|\|)(?= )", transform_logic, result)
            
        print(result)

if __name__ == "__main__":
    solve()