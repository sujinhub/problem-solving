#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		while (n--) cout << "=";
		cout << "\n";
	}

	return 0;
}
