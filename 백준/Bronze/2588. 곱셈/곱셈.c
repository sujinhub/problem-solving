#include <stdio.h>

int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n%d\n%d\n%d", A*(B%10), A*(B/10%10), A*(B/100), A*B);
	return 0;
}