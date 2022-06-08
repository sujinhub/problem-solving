#include <stdio.h>

int main(void) {
	int R1, R2, S;

	// R1 + R2 = 2 * S
	// R2 = 2 * S - R1

	scanf("%d %d", &R1, &S);

	printf("%d", 2 * S - R1);
}