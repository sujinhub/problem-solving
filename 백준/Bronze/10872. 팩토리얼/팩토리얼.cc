#include <stdio.h>

int main(void) {
	int N;
	int mul = 1;
	scanf("%d", &N);

	for (int i = 2; i <= N; i++) {
		mul = mul * i;
	}

	printf("%d", mul);
}