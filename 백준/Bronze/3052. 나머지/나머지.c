#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int arr[10] = { 0 };
	int check = 0, cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		arr[i] = num % 42;
	}

	
	for (int i = 0; i < 42; i++) {
		check = 0;
		for (int j = 0; j < 10; j++) {
			if (arr[j] == i) check = 1;
		}
		if (check == 1) cnt++;
	}

	printf("%d", cnt);
}