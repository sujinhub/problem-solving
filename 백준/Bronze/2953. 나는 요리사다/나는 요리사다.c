#include <stdio.h>

int main(void) {
	int cookData[5] = { 0 };
	int s1, s2, s3, s4;

	for (int i = 0; i < 5; i++) {
		scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
		cookData[i] = s1 + s2 + s3 + s4;
	}

	int best = 0;
	
	for (int i = 1; i < 5; i++) {
		if (cookData[best] < cookData[i]) best = i;
	}

	printf("%d %d", best + 1, cookData[best]);
}