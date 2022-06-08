#include <stdio.h>

int main(void) {
	int N;
	int num;
	int cnt = 0;
	int check = 0;
	// check = 1 : 소수 / check = 0 : 소수 X
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		check = 1;

		// 1은 소수 아님
		if (num > 1) {
			for (int j = 2; j < num; j++) {
				if (num%j == 0) {
					check = 0;
					break;
				}
			}
			if (check == 1) cnt++;
		}
	}
	printf("%d", cnt);
}