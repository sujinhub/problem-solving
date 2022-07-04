#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

string N;
int K, dp[1000001][11];

int DFS(string str, int depth) {
	if (depth == K) return stoi(str);

	int& ret = dp[stoi(str)][depth];
	if (ret != -1) return ret;

	for (int i = 0; i < str.size(); i++) {
		for (int j = i + 1; j < str.size(); j++) {
			if (str[j] == '0' && !i) continue;
			swap(str[i], str[j]);
			ret = max(ret, DFS(str, depth + 1));
			swap(str[i], str[j]);
		}
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> K;
	memset(dp, -1, sizeof(dp));
	cout << DFS(N, 0);

	return 0;
}
