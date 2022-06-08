#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int M, N; cin >> M >> N;
	int sqrt_M = sqrt(M);
	int sqrt_N = sqrt(N);

	int sum = 0;

	if (sqrt_M * sqrt_M != M) sqrt_M++;
	int min = sqrt_M * sqrt_M;
	for (int i = sqrt_M; i <= sqrt_N; i++) sum += i * i;
	
	if (sum == 0) cout << -1;
	else cout << sum << '\n' << min;

	return 0;
}