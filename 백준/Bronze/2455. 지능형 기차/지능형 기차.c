#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int getOn, getOff;
	int numOfPeople = 0;
	int best = 0;

	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &getOff, &getOn);
		numOfPeople = numOfPeople + getOn - getOff;
		if (numOfPeople > best) best = numOfPeople;
	}
	printf("%d", best);
}
