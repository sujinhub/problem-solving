#include <stdio.h>
int main(void) {
	int T; // 테스트 케이스의 개수
	int x1, y1, r1; // 조규현의 좌표, 조규현-류재명 거리
	int x2, y2, r2; // 백승환의 좌표, 백승환-류재명 거리
	int x, y;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		x = x1 - x2;
		y = y1 - y2;

		/* 조규현과 백승환의 좌표가 같을 때 */
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) printf("-1\n"); // 반지름이 같으면 무한개
			else printf("0\n"); // 반지름이 다르면 0개
		}

		/* 조규현과 백승환의 좌표가 다를 때 */
		// (1) 교점 0개 (만나지 않는다.)
		else if (x * x + y * y > (r1 + r2)*(r1 + r2) || (x * x + y * y) < (r1 - r2)*(r1 - r2)) {
			printf("0\n");
		}
		// (2) 교점 2개
		else if (x * x + y * y < (r1 + r2)*(r1 + r2) && x * x + y * y > (r1 - r2)*(r1 - r2)) {
			printf("2\n");
		}
		// (3) 교점 1개
		else if (x * x + y * y == (r1 + r2)*(r1 + r2) || x * x + y * y == (r1 - r2)*(r1 - r2)) {
			printf("1\n");
		}
	}
}