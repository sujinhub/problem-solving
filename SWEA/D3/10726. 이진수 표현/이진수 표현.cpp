#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int TC; cin >> TC;
	for (int test_case = 1; test_case <= TC; test_case++) {
		int N, M; cin >> N >> M;
		string ans = "ON";
		for (int i = 0; i < N; i++) {
			if (!(M & (1 << i))) {
				ans = "OFF";
				break;
			}
		}
		cout << '#' << test_case << ' ' << ans << '\n';
	}

	return 0;
}