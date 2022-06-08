#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int N;
int cnt = 0;
int *column;
int *LRDiag; // 좌->우 대각선
int *RLDiag; // 우->좌 대각선

void eightQueens(int r) {
	if (r == N) {
		cnt++;
		return;
	}
	for (int c = 0; c < N; c++) {
		if (column[c] || LRDiag[(N - 1) + r - c] || RLDiag[r + c])
			continue; // 이미 퀸이 있음.

		// 현재 위치에 놓을 수 있음.
		column[c] = 1;
		LRDiag[(N - 1) + r - c] = 1;
		RLDiag[r + c] = 1;

		// 다음 줄로 넘어감.
		eightQueens(r + 1);

		// 다음 행을 확인하기 전 설정값 해제
		column[c] = 0;
		LRDiag[(N - 1) + r - c] = 0;
		RLDiag[r + c] = 0;
	}
}

int main(void) {
	scanf("%d", &N);
	
	column = (int *)malloc(sizeof(int)*N);
	LRDiag = (int *)malloc(sizeof(int)*(2 * N - 1));
	RLDiag = (int *)malloc(sizeof(int)*(2 * N - 1));

	memset(column, 0, sizeof(int)*N);
	memset(LRDiag, 0, sizeof(int)*(2 * N - 1));
	memset(RLDiag, 0, sizeof(int)*(2 * N - 1));

	eightQueens(0);
	printf("%d", cnt);
}