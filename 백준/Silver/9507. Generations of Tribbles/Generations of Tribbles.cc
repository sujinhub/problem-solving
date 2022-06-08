#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	long long arr[70] = { 1, 1, 2, 4, };
	for (int i = 4; i < 70; i++) {
		arr[i] = arr[i - 4] + arr[i - 3] + arr[i - 2] + arr[i - 1];
	}

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << arr[n] << '\n';
	}
	
	return 0;
}