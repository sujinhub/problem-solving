#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, num;
	scanf("%d", &N);
	
	int *arr = (int *)malloc(sizeof(int)*N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		arr[i] = num;
	}

	int min = arr[0], max = arr[0];

	for (int i = 0; i < N; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	printf("%d %d", min, max);

	free(arr);
}