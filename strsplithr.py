def split_and_join(line):
    # Step 1: Split the string into a list of words
    words = line.split(" ")
    
    # Step 2: Join the list using a hyphen
    result = "-".join(words)
    
    return result

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)