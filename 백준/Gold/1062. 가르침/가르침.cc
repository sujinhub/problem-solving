#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K; cin >> N >> K;
	vector<int> v;

	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		int tmp = 0;
		for (int j = 0; j < str.size(); j++) tmp |= 1 << (str[j] - 'a');
		v.push_back(tmp);
	}

	int ans = 0;
	vector<int> brute(26);
	fill(brute.end() - K, brute.end(), 1);

	do {
		int cur = 0, cnt = 0;
		for (int i = 0; i < 26; i++) if (brute[i]) cur |= 1 << i;
		for (auto i : v) if (!(i & ~cur)) cnt++;
		ans = max(ans, cnt);
	} while (next_permutation(brute.begin(), brute.end()));
	cout << ans << '\n';

	return 0;
}