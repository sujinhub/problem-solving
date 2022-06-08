#include <stdio.h>

int main(void) {	
	int testCase, idx;
	char word1[20] = { 0 };
	char word2[20] = { 0 };

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%s %s", word1, word2);
		printf("Distances: ");
		idx = 0;
		while (word1[idx] != 0) {
			if ((int)word1[idx] <= (int)word2[idx]) {
				printf("%d ", (int)word2[idx] - (int)word1[idx]);
			}
			else {
				printf("%d ", ((int)word2[idx] + 26) - (int)word1[idx]);
			}
			idx++;
		}
		printf("\n");
	}
}