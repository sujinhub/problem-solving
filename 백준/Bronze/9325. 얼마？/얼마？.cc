#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int s; cin >> s;
		int n; cin >> n;
		while (n--) {
			int q, p; cin >> q >> p;
			s += q * p;
		}
		cout << s << '\n';
	}
	return 0;
}