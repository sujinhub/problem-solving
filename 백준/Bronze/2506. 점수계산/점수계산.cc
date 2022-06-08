#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int score = 1; int sum = 0;
	for (int i = 0; i < N; i++) {
		int problem; cin >> problem;
		if (problem == 1) {
			sum += score;
			score++;
		}
		else {
			score = 1;
		}
	}
	cout << sum;
	return 0;
}