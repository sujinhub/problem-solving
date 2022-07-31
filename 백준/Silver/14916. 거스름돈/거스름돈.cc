#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int five = n / 5;
	
	if (n % 5 == 0) {
		cout << five;
		return 0;
	}
	else {
		do {
			if ((n - (five * 5)) % 2 == 0) {
				cout << five + (n - (five * 5)) / 2;
				return 0;
			}
		} while (five--);
	}

	cout << -1;
	return 0;
}