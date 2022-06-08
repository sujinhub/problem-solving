#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0; // 시험 본 과목의 개수
	float curScore = 0; // 현재 성적
	float M = 0; // 세준이의 점수 중 최댓값
	int *scoreArr;
	float sum = 0;

	scanf("%d", &N);	
	scoreArr = (int *)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++) {
		scanf("%f", &curScore);
		scoreArr[i] = curScore;
		if (curScore > M) M = curScore;
	}

	for (int i = 0; i < N; i++) {
		sum = sum + scoreArr[i] / M * 100;
	}
	
	printf("%f", sum / N);
	free(scoreArr);
}