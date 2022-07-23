#include <iostream>
#include <cstring>
using namespace std;

int input[501][501], dp[501][501];

int solve(int r, int c, int n) {
	if (r == n - 1) return input[r][c];
	int& ret = dp[r][c];
	if (ret != -1) return ret;
	return ret = input[r][c] + max(solve(r + 1, c, n), solve(r + 1, c + 1, n));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++)
			cin >> input[i][j];

	memset(dp, -1, sizeof(dp));
	cout << solve(0, 0, n);

	return 0;
}