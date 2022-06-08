#include <stdio.h>

int main() {
	int arr[8];
	int N;
	int ascendingCheck = 0;
	int descendingCheck = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &N);
		arr[i] = N;
	}

	for (int i = 0; i < 8; i++) {
		if (arr[i] != i + 1) {
			ascendingCheck = 0;
			break;
		}
		ascendingCheck = 1;
	}

	for (int i = 0; i < 8; i++) {
		if (arr[i] != 8 - i) {
			descendingCheck = 0;
			break;
		}
		descendingCheck = 1;
	}
	
	if (ascendingCheck == 1) printf("ascending");
	else if (descendingCheck == 1) printf("descending");
	else printf("mixed");

}