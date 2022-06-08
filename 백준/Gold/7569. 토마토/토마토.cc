#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int main(void) {
	int M, N, H; cin >> M >> N >> H;
	vector<vector<vector<int>>> box(H, vector<vector<int>>(N, vector<int>(M, 0)));
	vector<vector<int>> dir = { {-1,0,0}, {1,0,0}, {0,1,0}, {0,-1,0}, {0,0,1}, {0,0,-1} };
	queue<tuple<int, int, int>> queue;

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				cin >> box[i][j][k];
				if (box[i][j][k] == 1) queue.push(make_tuple(i, j, k));
			}
		}
	}


	int day = 0, size = queue.size();
	while (!queue.empty()) {
		if (!size) {
			size = queue.size();
			day++;
		}

		int h = get<0>(queue.front());
		int r = get<1>(queue.front());
		int c = get<2>(queue.front());
		queue.pop(); size--;

		for (auto& i : dir) {
			int nh = h + i[0];
			int nr = r + i[1];
			int nc = c + i[2];
			if (nh >= 0 && nh < H && nr >= 0 && nr < N && nc >= 0 && nc < M && !box[nh][nr][nc]) {
				box[nh][nr][nc] = 1;
				queue.push(make_tuple(nh, nr, nc));
			}
		}
	}

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (!box[i][j][k]) {
					cout << "-1";
					return 0;
				}
			}
		}
	}

	cout << day;
	return 0;
}