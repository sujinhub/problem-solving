#include<iostream>
using namespace std;

int main() {
	int N, M, cnt = 0;
	cin >> N >> M;
	if (N >= M) cout << M / 2;
	else cout << N / 2;
	return 0;
}