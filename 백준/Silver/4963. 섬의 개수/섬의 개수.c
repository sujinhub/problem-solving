#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int w, h; // 너비 w, 높이 h
int info, **map, **visitedMap; // 지도
int numOfIsland; // 섬의 수
int arrX[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int arrY[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

void DFS(int x, int y) {
	int newX, newY;
	for (int i = 0; i < 8; i++) {
		newX = x + arrX[i];
		newY = y + arrY[i];
		if (newX >= 0 && newX < h && newY >= 0 && newY < w) {
			if (map[newX][newY] == 1 && visitedMap[newX][newY] == 0) {
				visitedMap[newX][newY] = 1;
				DFS(newX, newY);
			}
		}
	}
}

int main(void){
	while (1) {
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0) break; // 종료 조건
		map = (int **)malloc(sizeof(int *)*w*h);
		visitedMap = (int **)malloc(sizeof(int *)*w*h);

		for (int i = 0; i < h; i++) {
			map[i] = (int *)malloc(sizeof(int)*w);
			visitedMap[i] = (int *)malloc(sizeof(int)*w);
			memset(map[i], 0, sizeof(int)*w);
			memset(visitedMap[i], 0, sizeof(int)*w);
			
			for (int j = 0; j < w; j++) {
				scanf("%d", &info);
				map[i][j] = info;
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1 && visitedMap[i][j] == 0) {
					numOfIsland++;
					visitedMap[i][j] = 1;
					DFS(i, j);
				}
			}
		}

		printf("%d\n", numOfIsland);
		numOfIsland = 0;

		for (int i = 0; i < h; i++) {
			free(map[i]);
			free(visitedMap[i]);
		}
		free(map);
		free(visitedMap);
	}

}