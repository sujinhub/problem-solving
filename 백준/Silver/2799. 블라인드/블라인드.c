#include <stdio.h>

int main(void) {
	int m, n;
	int status[5] = { 0, };
	scanf("%d %d", &m, &n);
	char apt[1000][1000] = { NULL };
	for (int i = 0; i < 1 + m * 5; i++) {
		scanf("%s", &apt[i]);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int check = 0;
			for (int k = 0; k < 4; k++) {
				if (apt[1 + i * 5 + k][1 + j * 5] == '*') check++;
			}
			status[check]++;
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", status[i]);
	}
}