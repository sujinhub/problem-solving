#include <stdio.h>

int main(void) {
	int T, R;
	char S[20];
	int idx;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		idx = 0;
		memset(S, 0, sizeof(char) * 20);
		scanf("%d %s", &R, S);
		
		while (S[idx] != 0) {
			for (int j = 0; j < R; j++) {
				printf("%c", S[idx]);
			}
			idx++;
		}
		printf("\n");
	}
}