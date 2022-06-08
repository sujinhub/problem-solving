#include <stdio.h>

int main() {
	int arr[9];
	int N;
	int max, order;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &N);
		arr[i] = N;
	}

	max = arr[0];
	order = 0;

	for (int i = 1; i < 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
			order = i;
		}
	}

	printf("%d\n%d", max, order+1);

}