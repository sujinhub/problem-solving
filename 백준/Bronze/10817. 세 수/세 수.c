#include <stdio.h>

int main(){
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if ((A >= B && B >= C) || (C >= B && B >= A)) printf("%d", B);
	else if ((B >= C && C >= A) || (A >= C && C >= B)) printf("%d", C);
	else printf("%d", A);

	return 0;
}