#include <stdio.h>
int main(void) {
	int N; // 1000보다 작거나 같은 자연수 N
	int cnt; // N보다 작거나 같은 한수의 개수
	int one, ten, hundred; // 일, 십, 백의 자리
	scanf("%d", &N);

	if (N < 100) { 
		cnt = N;
	}
	else if (N <= 1000) {
		cnt = 99;
		for (int i = 100; i <= N; i++) {
			if (i == 1000) break;
			one = i % 10;
			ten = (i % 100) / 10;
			hundred = i / 100;
			if (ten - one == hundred - ten) cnt++;
		}
	}
	printf("%d", cnt);
}