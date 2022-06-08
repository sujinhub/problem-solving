#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string& a, string& b) {
	if (a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<string> v(N);

	for (int i = 0; i < N; i++) cin >> v[i];
	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (auto& i : v) cout << i << '\n';
	return 0;
}
