#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	string word;
	char alphabet, max_alpha;
	int max = 0;
	int cnt = 0;
	unordered_map<int, int> m;

	cin >> word;
	for (auto& i : word) {
		alphabet = (char)i;
		if (alphabet >= 'a' && alphabet <= 'z')
			alphabet -= 'a' - 'A';
		m[alphabet]++;
		if (m[alphabet] > max) max = m[alphabet];
	}

	for (auto& i : m) {
		if (i.second == max) {
			cnt++;
			max_alpha = i.first;
		}
	}

	if (cnt >= 2) cout << "?";
	else cout << max_alpha;

	return 0;
}