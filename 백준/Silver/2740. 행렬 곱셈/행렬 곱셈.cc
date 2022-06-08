#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, K; // M이 동일해야 행렬의 곱셈이 가능하다.

	cin >> N >> M;
	vector <vector<int>> matrix1(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrix1[i][j];
		}
	}

	cin >> M >> K;
	vector <vector<int>> matrix2(M, vector<int>(K, 0));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> matrix2[i][j];
		}
	}

	vector <vector<int>> matrix3(N, vector<int>(K, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int m = 0; m < M; m++) {
				matrix3[i][j] += matrix1[i][m] * matrix2[m][j];
			}
			cout << matrix3[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}