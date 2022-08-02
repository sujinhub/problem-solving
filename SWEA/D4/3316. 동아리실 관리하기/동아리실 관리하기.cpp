#include <iostream>
#include <cstring>
using namespace std;

#define MOD 1000000007
long long dp[16][10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T; cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		memset(dp, 0, sizeof(dp));
		string input; cin >> input;

		for (int i = 0; i < input.length(); i++)
			input[i] = 1 << (input[i] - 'A');

		for (int i = 1; i <= 15; i++) // 0001 ~ 1111
			if ((i & input[0]) && (i & 1)) dp[i][0] = 1;

		for (int day = 1; day < input.length(); day++) {
			for (int i = 1; i <= 15; i++) { // 0001 ~ 1111
				if (!dp[i][day - 1]) continue;
				for (int j = 1; j <= 15; j++) {
					if (!(i & j) || !(j & input[day])) continue;
					dp[j][day] = (dp[j][day] + dp[i][day - 1]) % MOD;
				}
			}
		}

		long long ans = 0;
		for (int i = 1; i <= 15; i++)
			ans = (ans + dp[i][input.length() - 1]) % MOD;
		cout << '#' << test_case << ' ' << ans << '\n';
	}

	return 0;
}