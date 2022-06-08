#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
	int max, min;
	if (N > M) {
		max = N;
		min = M;
	}
	else {
		max = M;
		min = N;
	}

	int s = 0;
	for (int i = 1; i <= min; i++) {
		if (min % i == 0 && max % i == 0) {
			s = i;
		}
	}

	int m = M * N / s;

	cout << s << '\n' << m;

}