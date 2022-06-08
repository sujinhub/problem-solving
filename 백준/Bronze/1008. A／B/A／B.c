#include <stdio.h>
int main(){
	double A, B;
	scanf("%lf %lf", &A, &B);
	printf("%.15g", A / B);
	return 0;
}