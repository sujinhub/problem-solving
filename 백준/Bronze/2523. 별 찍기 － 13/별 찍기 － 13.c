#include <stdio.h>

int main(void) {
	int N;
	int temp_i;

	scanf("%d", &N);

	for (int i = 1; i <= 2*N-1; i++) {
		if (i > N) temp_i = N - (i - N);
		else temp_i = i;
		for (int j = 1; j <= temp_i; j++) {
			printf("*");
		}
		printf("\n");
	}
}