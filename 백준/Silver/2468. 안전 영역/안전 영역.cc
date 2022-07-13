#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

const int dr[4] = { 1,-1,0,0 };
const int dc[4] = { 0,0,1,-1 };

int N;
int map[101][101];
int visited[101][101];

void DFS(int r, int c, int h) {
	for (int i = 0; i < 4; i++) {
		int nr = r + dr[i];
		int nc = c + dc[i];

		if (nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
		if (map[nr][nc] <= h || visited[nr][nc]) continue;

		visited[nr][nc]++;
		DFS(nr, nc, h);
	}
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	cin >> N;

	for (int i = 0; i < N; i++) {
		memset(map[i], 0, sizeof(int) * N);
		memset(visited[i], 0, sizeof(int) * N);
	}

	int mn = 100, mx = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			mn = min(mn, map[i][j]);
			mx = max(mx, map[i][j]);
		}
	}

	int ans = 1;

	for (int h = mn; h < mx; h++) {
		for (int i = 0; i < N; i++)
			memset(visited[i], 0, sizeof(int) * N);

		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] <= h || visited[i][j]) continue;

				visited[i][j]++;
				cnt++;
				DFS(i, j, h);
			}
		}
		ans = max(ans, cnt);
	}

	cout << ans;

	return 0;
}