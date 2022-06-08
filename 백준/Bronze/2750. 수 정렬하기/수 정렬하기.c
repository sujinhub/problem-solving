#include <stdio.h>

int Narr[1000] = { 0 };

int main(void) {
	int N, num;
	int temp;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		Narr[i] = num;
	}

	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (Narr[j] > Narr[j + 1]) {
				temp = Narr[j];
				Narr[j] = Narr[j + 1];
				Narr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", Narr[i]);
	}

}