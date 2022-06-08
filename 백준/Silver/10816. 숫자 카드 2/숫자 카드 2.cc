#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	unordered_map<int, int> m;

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		m[num]++;
	}
	
	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int num; cin >> num;
		cout << m[num] << ' ';
	}

	return 0;
}
