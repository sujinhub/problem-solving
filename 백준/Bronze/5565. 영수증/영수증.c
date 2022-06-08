#include <stdio.h>

int main(void) {	
	int total;
	int one_book;

	scanf("%d", &total);

	for (int i = 0; i < 9; i++) {
		scanf("%d", &one_book);
		total = total - one_book;
	}

	printf("%d", total);
}