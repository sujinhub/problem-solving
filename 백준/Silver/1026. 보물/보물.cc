#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<int> v1(N, 0);
	vector<int> v2(N, 0);

	for (int i = 0; i < N; i++) cin >> v1[i];
	for (int i = 0; i < N; i++) cin >> v2[i];
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<int>());

	int sum = 0;
	for (int i = 0; i < N; i++) sum += v1[i] * v2[i];

	cout << sum;
	return 0;
}
