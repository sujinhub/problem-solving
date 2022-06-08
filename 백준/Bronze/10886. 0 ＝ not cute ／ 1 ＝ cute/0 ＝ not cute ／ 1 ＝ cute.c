#include <stdio.h>

int main() {
	int N, isCute;
	int yes = 0, no = 0;
    
	scanf("%d", &N);
    
	for (int i = 0; i < N; i++) {
		scanf("%d", &isCute);
		if (isCute) yes++;
		else no++;
	}
    
	if (yes > no) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}
