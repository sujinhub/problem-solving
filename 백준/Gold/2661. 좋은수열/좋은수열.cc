#include <bits/stdc++.h>
using namespace std;

const int INF = int(2e9); // 2*109 = 2000000000

int N;
string s, ans = "";
bool isfound;

bool check(string s) {
	for (int i = 1; i <= s.size() / 2; i++)
		// substr(시작 위치, 길이)
		if (s.substr(s.size() - i, i) == s.substr(s.size() - 2 * i, i))
			return false;
	return true;
}

void DFS(int depth) {
	if (ans != "") return;
	if (depth == N) {
		ans = s;
		return;
	}
	for (int i = 1; i <= 3; i++) {
		if (check(s + to_string(i))) {
			s += to_string(i);
			DFS(depth + 1);
			s.pop_back();
		}
	}
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N; // 1~80
	DFS(0);
	cout << ans << '\n';
}