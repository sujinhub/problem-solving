#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T; cin >> T;
	while (T--) {
		int sum = 0;
		int n; cin >> n;
		for (int i = 1; i <= n; i += 2) {
			sum += i;
		}
		cout << sum << endl;
	}
}
