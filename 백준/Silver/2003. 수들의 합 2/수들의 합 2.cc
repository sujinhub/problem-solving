#include <iostream>
using namespace std;

int A[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++) cin >> A[i];

	int start = 1, end = 1, ans = 0;
	int sum = A[1];
	
	while (end <= N) {
		if (sum == M) ans++;
		if (sum > M) sum -= A[start++];
		else sum += A[++end];
	}

	cout << ans;
	return 0;
}