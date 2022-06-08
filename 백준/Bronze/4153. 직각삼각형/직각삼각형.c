#include <stdio.h>

int main(void) {
	int A, B, C;
	int largest;

	while (1) {
		scanf("%d %d %d", &A, &B, &C);
		if (A == 0 && B == 0 && C == 0) break;
		if (A > B && A > C) largest = A;
		else if (B > A && B > C) largest = B;
		else if (C > A && C > B) largest = C;

		if (largest == A) {
			if (B * B + C * C == A * A) printf("right\n");
			else printf("wrong\n");
		}
		else if (largest == B) {
			if (A * A + C * C == B * B) printf("right\n");
			else printf("wrong\n");
		}
		else if (largest == C) {
			if (B * B + A * A == C * C) printf("right\n");
			else printf("wrong\n");
		}
	}

}