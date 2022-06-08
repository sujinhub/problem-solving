#include <stdio.h>

int main(void) {
	int N;

	scanf("%d", &N);

	for (int i = 1; i < N; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int j = 1; j <= 2 * (N - i); j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= N * 2; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1; i < N; i++) {
		for (int j = 1; j <= (N - i); j++) {
			printf("*");
		}
		for (int j = 1; j <= 2 * i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (N - i); j++) {
			printf("*");
		}
		printf("\n");
	}

}