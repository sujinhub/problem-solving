N = int(input())
num = 665
cnt = 0

while cnt < N:
    num += 1
    cnt += 1 if '666' in str(num) else 0

print(num)