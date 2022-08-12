#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string& a, string& b) {
	if (a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T; cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N; cin >> N;
		vector<string> names(N);

		for (int n = 0; n < N; n++) cin >> names[n];
		sort(names.begin(), names.end(), cmp);
		names.erase(unique(names.begin(), names.end()), names.end());

		cout << '#' << test_case << ' ' << '\n';
		for (auto& i : names) cout << i << '\n';
	}

	return 0;
}