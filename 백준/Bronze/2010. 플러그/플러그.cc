#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int sum = 1;
	while (N--) {
		int plug; cin >> plug;
		sum += plug - 1;
	}
	cout << sum;
	return 0;
}