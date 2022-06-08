#include <iostream>
using namespace std;

int main() {
	bool numbers[10001] = { false, };
	int sum, num;

	for (int i = 1; i < 10001; i++) {
		num = i;
		sum = num + num % 10;
		while (num / 10 != 0) {
			sum += (num / 10) % 10;
			num /= 10;
		}
		if (sum < 10001) numbers[sum] = true;
	}
	
	for (int i = 1; i < 10001; i++)
		if (numbers[i] == false) cout << i << '\n';
}