#include <iostream>
#include <queue>
using namespace std;

int map[100][100];
bool visited[101][101];
int dr[] = { 0,0,-1,1 };
int dc[] = { -1,1,0,0 };

struct info { int r, c, dist; };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		for (int j = 0; j < M; j++) map[i][j] = str[j] - '0';
	}

	queue<info> q;
	visited[0][0] = true;
	q.push({ 0,0,1 });

	while (!q.empty()) {
		int r = q.front().r;
		int c = q.front().c;
		int dist = q.front().dist;
		q.pop();
		
		for (int i = 0; i < 4; i++) {
			int nr = r + dr[i];
			int nc = c + dc[i];

			if (nr == N - 1 && nc == M - 1) {
				cout << dist + 1;
				return 0;
			}

			if (nr < 0 || nc < 0 || nr >= N || nc >= M
				|| map[nr][nc] == 0 || visited[nr][nc] == true) continue;

			visited[nr][nc] = true;
			q.push({ nr,nc,dist + 1 });
		}
	}
}

