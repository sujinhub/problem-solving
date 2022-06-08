#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int cnt = 1;
	while (1) {

		int n; cin >> n;
		if (!n) break;

		cout << cnt++ << ". ";

		n *= 3;

		if (n % 2 == 0) {
			n /= 2;
			cout << "even ";
		}
		else {
			n = (n + 1) / 2;
			cout << "odd ";
		}

		n *= 3;
		n /= 9;

		cout << n << '\n';
	}

	return 0;
}
