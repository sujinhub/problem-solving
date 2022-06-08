#include <iostream>
using namespace std;

int main() {
	int digit = 1, sum = 0, mul = 1;
	int input; cin >> input;
	for (int i = 0; i < 5; i++) {
		mul = 1;
		digit = input % 10;
		for (int j = 0; j < 5; j++)
			mul *= digit;
		sum += mul;
		input /= 10;
	}
	cout << sum;
	return 0;
}