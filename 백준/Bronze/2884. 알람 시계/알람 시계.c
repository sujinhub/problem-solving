#include <stdio.h>

int main(){
	int H, M; // H시 M분
	scanf("%d %d", &H, &M);
	
	M = M - 45;

	if (M < 0) {
		H = H - 1;
		M = 60 + M;
	}

	if (H < 0) H = H + 24;

	printf("%d %d", H, M);

	return 0;
}