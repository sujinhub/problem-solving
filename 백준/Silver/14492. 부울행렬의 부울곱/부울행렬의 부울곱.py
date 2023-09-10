N = int(input())

A, B = [], []

for _ in range(N):
    row = list(map(int, input().split()))
    A.append(row)

for _ in range(N):
    row = list(map(int, input().split()))
    B.append(row)

# 부울곱 연산 결과를 저장할 행렬 C
C = [[0] * N for _ in range(N)]

for i in range(N):
    for j in range(N):
        for k in range(N):
            C[i][j] |= (A[i][k] & B[k][j])

result = sum(sum(row) for row in C)
print(result)
