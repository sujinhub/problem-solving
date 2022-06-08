#include <stdio.h>

char chessBoard[8][8] = { 0 };

int main(void) {
	char horse;
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf(" %c", &horse);
			if (i % 2 == 0 && j % 2 == 0 && horse == 'F') cnt++;
			if (i % 2 == 1 && j % 2 == 1 && horse == 'F') cnt++;
		}
	}
	printf("%d", cnt);
}