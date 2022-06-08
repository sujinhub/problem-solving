#include <stdio.h>

int main() {
	int cycleLength = 1;
	int first, second, sum;
	int num, newNum;

	scanf("%d", &num);

	first = num / 10;
	second = num % 10;

	sum = first + second;

	first = second;
	second = sum % 10;

	newNum = first * 10 + second;

	while (newNum != num) {
		cycleLength++;

		first = newNum / 10;
		second = newNum % 10;

		sum = first + second;

		first = second;
		second = sum % 10;

		newNum = first * 10 + second;
	}


	printf("%d", cycleLength);
}