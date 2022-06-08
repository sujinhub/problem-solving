#include <stdio.h>

int main(void) {
	int A, B, C, D;
	int P, M, N;
	int PdogCnt = 0, MdogCnt = 0, NdogCnt = 0;

	scanf("%d %d %d %d", &A, &B, &C, &D);
	// 개 한 마리는 A분 동안 공격, B분 동안 휴식
	// 나머지 한 마리는 C분 동안 공격, D분 동안 휴식
	scanf("%d %d %d", &P, &M, &N);
	// 각각 우체부, 우유배달원, 신문배달원의 도착 시간

	if (P % (A + B) <= A && P % (A + B) != 0) PdogCnt++;
	if (P % (C + D) <= C && P % (C + D) != 0) PdogCnt++;

	if (M % (A + B) <= A && M % (A + B) != 0) MdogCnt++;
	if (M % (C + D) <= C && M % (C + D) != 0) MdogCnt++;

	if (N % (A + B) <= A && N % (A + B) != 0) NdogCnt++;
	if (N % (C + D) <= C && N % (C + D) != 0) NdogCnt++;


	printf("%d\n%d\n%d\n", PdogCnt, MdogCnt, NdogCnt);
}