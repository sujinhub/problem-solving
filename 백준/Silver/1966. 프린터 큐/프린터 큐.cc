#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T; cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;

		priority_queue<int> pq;
		queue<pair<int, int>> q;

		for (int n = 0; n < N; n++) {
			int impt;
			cin >> impt;
			pq.push(impt);
			q.push({ n,impt });
		}

		int ans = 0;
		while (!q.empty()) {
			int idx = q.front().first;
			int impt = q.front().second;
			q.pop();

			if (pq.top() == impt) {
				pq.pop();
				ans++;
				if (idx == M) {
					cout << ans << '\n';
					break;
				}
			}
			else q.push({ idx, impt });
		}
	}

	return 0;
}