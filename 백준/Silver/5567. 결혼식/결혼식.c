#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int n, m, a, b;
	int **list, *checkList;
	int numOfPeople = 0;

	scanf("%d", &n);

	list = (int **)malloc(sizeof(int *)*(n+1)*(n+1));
	for (int i = 0; i < n + 1; i++) {
		list[i] = (int *)malloc(sizeof(int)*(n + 1));
		memset(list[i], 0, sizeof(int)*(n + 1));
	}
	checkList = (int *)malloc(sizeof(int)*(n + 1));
	memset(checkList, 0, sizeof(int)*(n + 1));

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		list[a][b] = 1;
		list[b][a] = 1;
	}

	for (int i = 2; i < n + 1; i++) {
		if (list[1][i] == 1) {
			if (!checkList[i]) numOfPeople++;
			checkList[i] = 1;
			for (int j = 2; j < n + 1; j++) {
				if (list[i][j] && !checkList[j]) {
					checkList[j] = 1;
					numOfPeople++;
				}
			}
			
		}
	}

	printf("%d", numOfPeople);

	for (int i = 0; i < n + 1; i++) {
		free(list[i]);
	}
	free(list);
	free(checkList);
}