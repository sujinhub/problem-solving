#include <iostream>
#include <list>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int test_case = 1; test_case <= 10; test_case++) {
		int N; cin >> N;
		list<int> ciphertext;

		for (int i = 0; i < N; i++) {
			int num; cin >> num;
			ciphertext.push_back(num);
		}

		int M; cin >> M;
		for (int i = 0; i < M; i++) {
			char cmd; cin >> cmd;
			if (cmd == 'I') {
				int x, y; cin >> x >> y;
				auto iter = ciphertext.begin();
				advance(iter, x);
				for (int j = 0; j < y; j++) {
					int num; cin >> num;
					ciphertext.insert(iter, num);
				}
			}
			else if (cmd == 'D') {
				int x, y; cin >> x >> y;
				auto iter = ciphertext.begin();
				advance(iter, x);
				for (int j = 0; j < y; j++)
					iter = ciphertext.erase(iter);
			}
			else if (cmd == 'A') {
				int y; cin >> y;
				for (int j = 0; j < y; j++) {
					int s; cin >> s;
					ciphertext.push_back(s);
				}
			}
		}

		cout << '#' << test_case << ' ';
		auto iter = ciphertext.begin();
		for (int i = 0; i < 10; i++)
			cout << *iter++ << ' ';
		cout << '\n';
	}

	return 0;
}