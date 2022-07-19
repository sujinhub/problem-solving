#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T; cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N; cin >> N;
		int check = 0, k = 0;

		while (check != (1 << 10) - 1) {
			int temp = N * ++k;
			while (temp) {
				check |= 1 << (temp % 10);
				temp /= 10;
			}
		}

		cout << '#' << test_case << ' ' << N * k << '\n';
	}

	return 0;
}