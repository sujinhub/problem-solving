#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getNumOfAreas(vector<vector<char>> picture, int N) {
	vector<vector<int>> visited(N, vector<int>(N, 0));
	stack<pair<int, int>> stack;
	int dir[4][2] = { {0,1}, {0,-1}, {-1,0}, {1,0} }; // 상, 하, 좌, 우
	int area = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				stack.push(make_pair(i, j));
				area++;
				while (!stack.empty()) {
					int r = stack.top().first;
					int c = stack.top().second;
					stack.pop();
					visited[r][c] = 1;
					for (int d = 0; d < 4; d++) {
						int nr = r + dir[d][0];
						int nc = c + dir[d][1];
						if (nr >= 0 && nr < N && nc >= 0 && nc < N) {
							if (picture[i][j] == picture[nr][nc] && !visited[nr][nc]) {
								stack.push(make_pair(nr, nc));
							}
						}
					}
				}
			}
		}
	}
	return area;
}


int main(void) {
	int N; cin >> N;
	vector<vector<char>> picture(N, vector<char>(N, 0));
	vector<vector<char>> picture_for_RG(N, vector<char>(N, 0));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			char input; cin >> input;
			picture[i][j] = input;
			if (input == 'R') input = 'G';
			picture_for_RG[i][j] = input;
		}

	cout << getNumOfAreas(picture, N) << ' ' << getNumOfAreas(picture_for_RG, N);
	return 0;
}