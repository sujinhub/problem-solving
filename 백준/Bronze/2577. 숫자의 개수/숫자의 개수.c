#include <stdio.h>

int main() {
	int numArr[10] = { 0 };
	int A, B, C, N;
	scanf("%d %d %d", &A, &B, &C);

	int Mul = A * B * C;
	int Div = Mul;

	while (1) {
		N = Div % 10;
		numArr[N]++;
		Div = Div / 10;
		if (Div == 0) break;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", numArr[i]);
	}
}