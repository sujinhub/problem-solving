#include <iostream>
using namespace std;

int ans, N, S, arr[20];

void solve(int depth, int sum) {
	if (depth == N) {
		if (sum == S) ans++;
		return;
	}
	solve(depth + 1, sum);
	solve(depth + 1, sum + arr[depth]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> S;
	for (int i = 0; i < N; i++) cin >> arr[i];
	solve(0, 0);
	if (S == 0) ans--; // 모든 경우를 선택하지 않는 경우 = 공집합 제거
	cout << ans << '\n';
}