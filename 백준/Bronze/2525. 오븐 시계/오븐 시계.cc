#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	B += C;

	while (B >= 60) {
		A++;
		B -= 60;
	}

	while (A >= 24) {
		A -= 24;
	}

	cout << A << ' ' << B;

	return 0;
}