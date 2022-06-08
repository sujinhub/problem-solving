#include <iostream>
using namespace std;

int main() {
	int X, cnt;
	cin >> X;
	for (cnt = 0; X != 0; cnt++) X &= (X - 1);
	cout << cnt;
	return 0;
}