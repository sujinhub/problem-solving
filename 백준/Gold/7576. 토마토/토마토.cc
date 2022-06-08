#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	// 상자의 크기를 나타내는 두 정수 M, N
	int M, N; cin >> M >> N;

	// N*M 크기의 2차원 vector
	vector<vector<int>> box(N, vector<int>(M, 0));
	// 상, 하, 좌, 우를 나타내는 2차원 vector
	vector<vector<int>> dir = { {0,1}, {0,-1}, {-1,0}, {1,0} };
	// (r,c) 좌표를 담는 queue
	queue<pair<int, int>> queue;

	// 토마토들의 정보를 담는데, 익은 토마토(1)라면 queue에 push
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> box[i][j];
			if (box[i][j] == 1) queue.push(make_pair(i, j));
		}
	}

	int day = 0, size = queue.size();

	// queue가 빌 때까지, 즉 더 익을 토마토가 없을 때까지 반복
	while (!queue.empty()) {
		if (!size) {
			size = queue.size();
			day++;
		}

		int r = queue.front().first;
		int c = queue.front().second;
		queue.pop(); size--;

		for (auto& i : dir) {
			int nr = r + i[0];
			int nc = c + i[1];
			if (nr >= 0 && nr < N && nc >= 0 && nc < M && !box[nr][nc]) {
				box[nr][nc] = 1;
				queue.push(make_pair(nr, nc));
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!box[i][j]) {
				cout << "-1";
				return 0;
			}
		}
	}

	cout << day;
	return 0;
}