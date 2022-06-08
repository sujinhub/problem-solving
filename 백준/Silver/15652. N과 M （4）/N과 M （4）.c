#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N, M;
int *SEQ;

// location에 넣어도 되는지 from부터 확인
void DECIDE(int from, int location) { 
	for (int i = from; i <= N; i++) {
		for (int j = location; j < M; j++) SEQ[j] = 0;
		SEQ[location] = i;
		if (location + 1 == M) {
			for (int i = 0; i < M; i++) printf("%d ", SEQ[i]);
			printf("\n");
		}
		else DECIDE(i, location + 1);
	}

}

int main(void) {
	scanf("%d %d", &N, &M);
	
	SEQ = (int *)malloc(sizeof(int)*M);
	memset(SEQ, 0, sizeof(int)*M);

	DECIDE(1, 0); // 1부터 N까지 SEQ[0]에 넣을 값 확인
}