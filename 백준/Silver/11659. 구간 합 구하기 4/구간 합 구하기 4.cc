#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M; cin >> N >> M;
	vector<long long> sum(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> sum[i];
		sum[i] += sum[i - 1];
	}

	for (int i = 0; i < M; i++) {
		int s, e; cin >> s >> e;
		cout << sum[e] - sum[s - 1] << '\n';
	}

	return 0;
}