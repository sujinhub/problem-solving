#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		while (n--) {
			int x, y; cin >> x >> y;
			cout << x + y << ' ' << x * y << '\n';
		}
	}

	return 0;
}
