if __name__ == '__main__':
    N = int(input())
    my_list = []
    
    for _ in range(N):
        # Split the input into the command and its arguments
        line = input().split()
        command = line[0]
        args = line[1:]
        
        if command == "insert":
            my_list.insert(int(args[0]), int(args[1]))
        elif command == "print":
            print(my_list)
        elif command == "remove":
            my_list.remove(int(args[0]))
        elif command == "append":
            my_list.append(int(args[0]))
        elif command == "sort":
            my_list.sort()
        elif command == "pop":
            my_list.pop()
        elif command == "reverse":
            my_list.reverse()