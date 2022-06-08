#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T, N, M, num;

	for (cin >> T; T--;) {
		unordered_map<int, bool> note;
		for (cin >> N; N--;) {
			cin >> num;
			note[num] = true;
		}
		
		for (cin >> M; M--;) {
			cin >> num;
			if (note[num]) cout << "1\n";
			else cout << "0\n";
		}
	}

	return 0;
}