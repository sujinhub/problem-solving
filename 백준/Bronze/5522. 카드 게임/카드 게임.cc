#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int sum = 0;
	for (int i = 1; i <= 5; i++) {
		int score; cin >> score;
		sum += score;
	}
	cout << sum;

	return 0;
}
