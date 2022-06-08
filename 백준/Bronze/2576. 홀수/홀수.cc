#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int min = 100;
	for (int i = 0; i < 7; i++) {
		int num; cin >> num;
		if (num % 2) {
			sum += num;
			if (min > num) min = num;
		}
	}
	if (sum == 0) {
		cout << -1;
		return 0;
	}
	else cout << sum << '\n' << min;
	return 0;
}