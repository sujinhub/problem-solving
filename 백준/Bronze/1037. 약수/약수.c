#include <stdio.h>

int main(void) {
	int numOfN;
	scanf("%d", &numOfN);

	int *arrOfN;
	arrOfN = (int *)malloc(sizeof(int)*numOfN);

	int A;
	for (int i = 0; i < numOfN; i++) {
		scanf("%d", &A);
		arrOfN[i] = A;
	}
	
	int smallest = arrOfN[0];
	int biggest = arrOfN[0];

	for (int i = 0; i < numOfN; i++) {
		if (smallest > arrOfN[i]) smallest = arrOfN[i];
		if (biggest < arrOfN[i]) biggest = arrOfN[i];
	}

	if (numOfN == 1) printf("%d", arrOfN[0] * arrOfN[0]);
	else printf("%d", smallest * biggest);
}