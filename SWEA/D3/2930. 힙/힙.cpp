#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T; cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		priority_queue<int> pq;
		cout << '#' << test_case << ' ';

		int N; cin >> N;
		while (N--) {
			int cmd; cin >> cmd;

			if (cmd == 1) {
				int x; cin >> x;
				pq.push(x);
			}

			else if (cmd == 2) {
				if (pq.empty()) cout << -1 << ' ';
				else {
					cout << pq.top() << ' ';
					pq.pop();
				}
			}
		}
		cout << '\n';
	}
	return 0;
}