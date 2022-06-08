#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, M; cin >> N >> M;

	vector<int> matrix1;
	vector<int> matrix2;

	for (int i = 0; i < N * M; i++) {
		int num; cin >> num;
		matrix1.push_back(num);
	}
	for (int i = 0; i < N * M; i++) {
		int num; cin >> num;
		matrix2.push_back(num);
	}
	
	for (int i = 0; i < N * M; i++) {
		cout << matrix1[i] + matrix2[i] << ' ';
		if ((i + 1) % M == 0) cout << '\n';
	}

	return 0;
}