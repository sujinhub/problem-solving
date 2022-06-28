#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T; cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		cout << '#' << test_case << '\n';
		int N; cin >> N;
		vector<vector<int>> snail(N, vector<int>(N, 0));

		// direction: up, down, left, right
		int dir = 0b0001;
		int r = 0, c = 0;
		
		for (int i = 1; i <= N * N; i++) {
			snail[r][c] = i;

			if (dir == 0b0001 && (c + 1 == N || snail[r][c + 1])) dir = 0b0100;
			else if (dir == 0b0100 && (r + 1 == N || snail[r + 1][c])) dir = 0b0010;
			else if (dir == 0b0010 && (c - 1 == -1 || snail[r][c - 1])) dir = 0b1000;
			else if (dir == 0b1000 && (r - 1 == -1 || snail[r - 1][c])) dir = 0b0001;

			if (dir == 0b0001) c++;
			else if (dir == 0b0010) c--;
			else if (dir == 0b1000) r--;
			else if (dir == 0b0100) r++;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				cout << snail[i][j] << ' ';
			cout << '\n';
		}
	}
	return 0;
}