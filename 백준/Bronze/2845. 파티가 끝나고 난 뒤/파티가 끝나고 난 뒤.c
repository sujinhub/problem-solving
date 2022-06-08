#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
	int L, P; // 1m2당 사람 수, 넓이
	int person;

	scanf("%d %d", &L, &P);
	int people = L * P;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &person);
		printf("%d ", person - people);
	}
}