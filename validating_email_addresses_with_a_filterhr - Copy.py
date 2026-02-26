import re

def fun(s):
    # Pattern explanation:
    # ^[a-zA-Z0-9_-]+ : Username (letters, numbers, -, _)
    # @               : At symbol
    # [a-zA-Z0-9]+    : Website (letters, numbers)
    # \.              : Literal dot
    # [a-zA-Z]{1,3}$  : Extension (letters only, length 1-3)
    
    pattern = r'^[a-zA-Z0-9_-]+@[a-zA-Z0-9]+\.[a-zA-Z]{1,3}$'
    return re.match(pattern, s) is not None

def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

filtered_emails = filter_mail(emails)
filtered_emails.sort()
print(filtered_emails)