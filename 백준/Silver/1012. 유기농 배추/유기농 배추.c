#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* ---------------------- X(M)
 l    0 0 0 0 0 0 0 0 0 0
 l    0 0 0 0 0 0 0 0 0 0
 l    0 0 0 0 0 0 0 0 0 0
 Y(N) 0 0 0 0 0 0 0 0 0 0
*/
int **field = NULL;
int **visitedField = NULL;
int T; // 테스트 케이스의 수
int M, N; // 가로, 세로 길이
int K; // 배추가 심어져 있는 위치의 개수
int X, Y; // 배추의 위치
int numOfWorm = 0; // 지렁이 수

void DFS(int V_Y, int V_X) {
	visitedField[V_Y][V_X] = 1;
	if (V_X - 1 >= 0 && !visitedField[V_Y][V_X - 1] && field[V_Y][V_X - 1] == 1) // 좌
		DFS(V_Y, V_X - 1);
	if (V_X + 1 < M && !visitedField[V_Y][V_X + 1] && field[V_Y][V_X + 1] == 1) // 우
		DFS(V_Y, V_X + 1);
	if (V_Y - 1 >= 0 && !visitedField[V_Y - 1][V_X] && field[V_Y - 1][V_X] == 1) // 위
		DFS(V_Y - 1, V_X);
	if (V_Y + 1 < N && !visitedField[V_Y + 1][V_X] && field[V_Y + 1][V_X] == 1) // 아래
		DFS(V_Y + 1, V_X);
}

int main(void) {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		numOfWorm = 0;
		scanf("%d %d %d", &M, &N, &K);

		field = (int **)malloc(sizeof(int *)*N);
		visitedField = (int **)malloc(sizeof(int *)*N);

		for (int i = 0; i < N; i++) {
			field[i] = (int *)malloc(sizeof(int)*M);
			visitedField[i] = (int *)malloc(sizeof(int)*M);
			memset(field[i], 0, sizeof(int)*M);
			memset(visitedField[i], 0, sizeof(int)*M);
		}

		for (int i = 0; i < K; i++) {
			scanf("%d %d", &X, &Y);
			field[Y][X] = 1;
		}

		/*
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				printf("%d ", field[i][j]);
			}
			printf("\n");
		}
		*/

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (field[i][j] == 1 && !visitedField[i][j]) {
					DFS(i, j);
					numOfWorm++;
				}
			}
		}

		printf("%d\n", numOfWorm);

		for (int i = 0; i < N; i++) {
			free(field[i]);
		}
	}
}