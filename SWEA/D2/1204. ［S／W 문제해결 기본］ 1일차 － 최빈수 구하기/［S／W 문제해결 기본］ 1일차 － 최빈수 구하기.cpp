#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T; cin >> T;

	for (int i = 1; i <= T; i++) {
		int test_case; cin >> test_case;
		unordered_map<int, int> map;

		for (int j = 0; j < 1000; j++) {
			int score; cin >> score;
			map[score]++;
		}

		auto it = max_element(map.begin(), map.end(), [](const auto& x, const auto& y) {
			return x.second <= y.second;
		});

		cout << '#' << test_case << ' ' << it->first << '\n';
	}

	return 0;
}