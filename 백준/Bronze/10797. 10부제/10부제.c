#include <stdio.h>

int main(void) {	
	int day;
	int car;
	int cnt = 0;

	scanf("%d", &day);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &car);
		if (car == day % 10) cnt++;
	}
	
	printf("%d", cnt);
}