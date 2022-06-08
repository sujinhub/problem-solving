#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long  x, y;
	cin >> x >> y;

	if (x > y) {
		cout << x - y - 1 << endl;
		for (long long i = y + 1; i < x; i++) {
			cout << i << ' ';
		}
	}
	else if (x < y) {
		cout << y - x - 1 << endl;
		for (long long i = x + 1; i < y; i++) {
			cout << i << ' ';
		}
	}
	else if (x == y) {
		cout << 0;
	}

	return 0;
}
