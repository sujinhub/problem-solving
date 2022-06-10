#include <stdio.h>
char village[25][25] = { 0, };
int visitedHouse[25][25] = { 0, };
int numOfHouse[525] = { 0 };
int N;
int numOfComplex = 0;

void DFS(int V_X, int V_Y){
	visitedHouse[V_X][V_Y] = 1;
	numOfHouse[numOfComplex] += 1;
	if (V_X - 1 >= 0 && !visitedHouse[V_X - 1][V_Y] && village[V_X - 1][V_Y] == '1') // 좌
		DFS(V_X - 1, V_Y);
	if (V_X + 1 < N && !visitedHouse[V_X + 1][V_Y] && village[V_X + 1][V_Y] == '1') // 우
		DFS(V_X + 1, V_Y);
	if (V_Y - 1 >= 0 && !visitedHouse[V_X][V_Y - 1] && village[V_X][V_Y - 1] == '1') // 이
		DFS(V_X, V_Y - 1);
	if (V_Y + 1 < N && !visitedHouse[V_X][V_Y + 1] && village[V_X][V_Y + 1] == '1') // 아래
		DFS(V_X, V_Y + 1);
}

int main(){
	int temp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%s", village[i]);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (village[i][j] == '1' && !visitedHouse[i][j]){
				DFS(i, j);
				numOfComplex++;
			}
		}
	}
	for (int i = numOfComplex - 1; i > 0; i--) {
		for (int j = 0; j < i; j++){
			if (numOfHouse[j] > numOfHouse[j + 1]){
				temp = numOfHouse[j];
				numOfHouse[j] = numOfHouse[j + 1];
				numOfHouse[j + 1] = temp;
			}
		}
	}
	printf("%d\n", numOfComplex);
	for (int i = 0; i < numOfComplex; i++)
		if (numOfHouse[i])
			printf("%d\n", numOfHouse[i]);
	return 0;
}
