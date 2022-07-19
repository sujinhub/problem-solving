#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[10001] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	int max = 0;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		arr[num]++;
		if (max < num) max = num;
	}

	for (int i = 1; i <= max; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}

	return 0;
}
