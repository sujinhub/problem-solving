#include <stdio.h>

int main(void) {
	int arr[50][2];
	int N, cnt;
	int x, y;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		arr[i][0] = x;
		arr[i][1] = y;
	}
	for (int i = 0; i < N; i++) { // 기준 대상
		cnt = 1;
		for (int j = 0; j < N; j++) { // 비교 대상
			if (j == i) continue;
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) cnt++;
		}
		printf("%d ", cnt);
	}
}