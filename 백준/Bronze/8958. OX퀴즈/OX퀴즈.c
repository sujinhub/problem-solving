#include <stdio.h>

int main(void) {
	int testCase;
	char OXarr[80] = { 0 };
	int sum, idx, score;
	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		sum = 0; idx = 0; score = 0;
		scanf("%s", OXarr);
		while (OXarr[idx] != 0) {
			if (OXarr[idx] == 'O') {
				score = score + 1;
				sum = sum + score;
			}
			else if (OXarr[idx] == 'X') {
				score = 0;
			}
			idx++;
		}
		printf("%d\n", sum);
	}
}