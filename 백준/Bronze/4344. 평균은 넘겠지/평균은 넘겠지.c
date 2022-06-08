#include <stdio.h>
#include <string.h>

int main(void){
	int C, N, score, cnt = 0;
	double average = 0;
	int *studentArr;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		studentArr = (int *)malloc(sizeof(int)*N);
		memset(studentArr, 0, sizeof(int)*N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &score);
			studentArr[j] = score;
			average += score;
		}
		average = (double)average / N;
		for (int j = 0; j < N; j++) {
			if (studentArr[j] > average) cnt++;
		}
		printf("%.03f%%\n", (double)cnt / N * 100);
		average = 0;
		cnt = 0;
		free(studentArr);
	}
}