#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int money[] = { 50000,10000,5000,1000,500,100,50,10 };
	int T; cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		cout << '#' << test_case << '\n';
		int N; cin >> N;

		for (int i = 0; i < 8; i++) {
			cout << N / money[i] << ' ';
			N %= money[i];
		}
		cout << '\n';
	}

	return 0;
}