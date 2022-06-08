#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N; cin >> N;
	int mx = 0;
	long long sum = 0;

	for (int i = 0; i < N; i++) {
		int d; cin >> d;
		if (N == 1 && d == 1) {
			cout << "Happy";
			return 0;
		}
		if (d > mx) mx = d;
		sum += d;
	}

	if (2 * mx > sum) cout << "Unhappy";
	else cout << "Happy";
	return 0;
}