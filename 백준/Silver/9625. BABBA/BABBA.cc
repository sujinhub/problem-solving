#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int K; cin >> K;
	int A = 1;
	int B = 0;
	int temp = 0;
	for (int i = 0; i < K; i++) {
		temp = A;
		A = B;
		B += temp;
	}

	cout << A << ' ' << B;
	return 0;
}