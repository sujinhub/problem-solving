#include <stdio.h>

int main(void) {
	char S[100];
	int alpha[26] = { -1 };
	memset(alpha, -1, sizeof(int) * 26);
	scanf("%s", S);

	int idx = 0;
	while (S[idx] != 0) {
		if (alpha[(int)S[idx] - 97] == -1) {
			alpha[(int)S[idx] - 97] = idx;
		}
		idx++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}
}