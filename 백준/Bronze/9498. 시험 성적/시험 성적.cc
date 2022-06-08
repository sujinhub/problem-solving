#include <stdio.h>

int main(){
	int A;
	scanf("%d", &A);

	if (100 >= A && A >= 90) printf("A");
	else if (89 >= A && A >= 80) printf("B");
	else if (79 >= A && A >= 70) printf("C");
	else if (69 >= A && A >= 60) printf("D");
	else printf("F");

	return 0;
}