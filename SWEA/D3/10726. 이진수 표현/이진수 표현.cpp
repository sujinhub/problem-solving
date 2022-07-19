#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int TC; cin >> TC;
	for (int test_case = 1; test_case <= TC; test_case++) {
		int N, M; cin >> N >> M;
		string ans = "ON";
		int bit = (1 << N) - 1;
		if (((M & bit) != bit)) ans = "OFF";
		cout << '#' << test_case << ' ' << ans << '\n';
	}

	return 0;
}