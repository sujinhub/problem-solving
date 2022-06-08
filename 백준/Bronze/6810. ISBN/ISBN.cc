#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int ten = 120 - 9 - 12 - 8;

	int a, b, c; cin >> a >> b >> c;

	cout << "The 1-3-sum is " << ten + a * 1 + b * 3 + c * 1;

	return 0;
}
