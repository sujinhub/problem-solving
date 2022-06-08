#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *graph = 0;
int *DFS_visited = 0;
int cnt = 0;

void DFS(int start_v, int N) {
	DFS_visited[start_v] = 1;

	for (int i = 1; i <= N; i++) {
		if (graph[start_v*N + i] == 1 && DFS_visited[i] == 0) {
			DFS(i, N);
			cnt++;
		}
	}
	return;
}


int main(void) {
	int N, M;
	int A, B;

	scanf("%d %d", &N, &M);

	graph = (int *)malloc(sizeof(int)*(N+1)*(N+1)); // 1부터 시작하므로 N+1
	memset(graph, 0, sizeof(int)*(N+1)*(N+1));

	DFS_visited = (int *)malloc(sizeof(int)*(N+1));
	memset(DFS_visited, 0, sizeof(int)*(N+1));


	for (int i = 0; i < M; i++) { // M번 실행
		scanf("%d %d", &A, &B);
		graph[A*N + B] = 1;
		graph[B*N + A] = 1;
	}

	DFS(1, N);
	printf("%d", cnt);

	free(graph);
}